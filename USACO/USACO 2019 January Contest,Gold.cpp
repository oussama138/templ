#include <bits/stdc++.h>
using namespace std;
#define ll long long int
  

#define endl "\n";  
#define F first
#define S second
ll  modd=1e9+7;

 
vector<vector<pair<int,int>>>edg; 
// map<pair<int,int>,ll>c;
 
const int maxn = 10000+9;
 

int n,m;
ll t;
ll co[maxn];
ll dist[maxn];
int li[maxn]; 
ll pe[maxn];

void build(){
	for(int i=0;i<n;i++){
		li[i]=i; 
	}
	for(int i=0;i<n;i++){
		pe[i]=0;
	}

}
// void parent(int x){
// 	while(li[x]!=x){
// 		x=li[x];
// 	}
// 	return x;
// }
// int unite(int x,int y){
// 	x=parent(x);
// 	y=parent(y);

// 	if(si[x]>si[y]){
// 		li[y]=x;
// 		si[x]+=si[y];
// 	}else{
// 		li[x]=y;
// 		si[y]+=si[y];
// 	}
// }

struct cmp
{
	bool operator()(pair<ll,pair<int,int>> ele1, pair<ll,pair<int,int>> ele2){ 
		if(ele1.first!=ele2.first){ 
			if(ele1.first>ele2.first){
				return 1;
			}
			return 0;
		}else{ 
			return ele2.second.second<ele1.second.second;
		}
	}
};

void djs(int x){
	priority_queue<pair<ll,pair<int,int>>,vector<pair<ll,pair<int,int>>> , cmp>q;
	q.push({0,{x,-1}});
	bool vis[n];
	for(int i=0;i<n;i++){
		vis[i]=0;
		dist[i]=1e14;
	}
	dist[0]=0;
	while(!q.empty()){
		int cur=q.top().second.first;
		int p=q.top().second.second;
 
		q.pop();
		if(vis[cur])continue;
		vis[cur]=1;
		if(p!=-1 && li[cur]==cur){ 
			li[cur]=p;
			pe[p]++;
		}
		for(auto ele : edg[cur]){
			ll d=dist[cur]+ele.first;
			if(dist[ele.second]>=d){
				dist[ele.second]=d;
				q.push({d,{ele.S,cur}});
			}
		}
	}
}

void solu(){
	cin>>n>>m>>t;
	// if(m>10000){
	// 	for(int i=0;i<1e9;i++){
	// 		cout<<"n"<<endl;
	// 	}
	// }
	build();
	int a,b;
	ll d;
	edg.resize(n);
	for(int i=0;i<n;i++){
		cin>>co[i];
	}
	for(int i=0;i<m;i++){
		cin>>a>>b>>d;
		a--;
		b--;
		edg[a].push_back({d,b});
		edg[b].push_back({d,a });

	}

	djs(0);
	co[0]=0;
	// for(int i=0;i<n;i++){
	// 	cout<<dist[i]<<" ";
	// }
	ll cc[n];
	queue<int>q;
	// cout<<endl;

	for(int i=0;i<n;i++){
		cc[i]=co[i]; 
		// if(li[i]==2)cout<<i<<endl;
		if(pe[i]==0){
			q.push(i);
			// cout<<i<<endl;

			cc[i]=co[i];
		}
	}

	li[0]=-1;
	// cout<<-1<<" "<<pe[2]<<endl;
	while(!q.empty()){
		int cur=q.front();
		q.pop();
		cc[li[cur]]+=cc[cur];
		pe[li[cur]]--;
		// if(li[cur]==0){
		// 	cout<<cur<<" "<<cc[cur]<<endl;
		// 	cout<<pe[li[cur]]<<endl;
		// }
		if(pe[li[cur]]==0){
			q.push(li[cur]);
		}
	}
	// for(int i=0;i<n;i++){
	// 	cout<<cc[i]<<" ";
	// }
	ll ans=0;
	for(int i=0;i<n;i++){
		ll c12=co[i]*dist[i];
		ans+=c12;
	} 
	// ll curr=ans; 
	ll res=0;
	for(int i=0;i<n;i++){
		ll cur = dist[i]*cc[i];
		ll cur2= cc[i]*t;
		res=max(res,cur-cur2);
	} 
	// if(ans>=1e){
	// 		for(int i=0;i<1e9;i++){
	// 		cout<<"n"<<endl;
	// 	}
	// }
	cout<<res<<endl;
}
int main(){
		// ios_base::sync_with_stdio(0);
		// cin.tie(0);
 
freopen("shortcut.in","r",stdin);
freopen("shortcut.out","w",stdout);
		// int cass;
		// cin>>cass; 
		// for(int i=0;i<cass;i++)
		solu();
    return 0; 
}
