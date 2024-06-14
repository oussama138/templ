#include <bits/stdc++.h>
using namespace std;
//
#define ll long long int
 
// using pii pair<int,int>;
 
 
#define endl "\n";  
ll  modd=1e9+7;
 
vector<vector<pair<int,int>>>edg;
vector<vector<pair<int,int>>>edg2;
 
 
const int maxn = 2e5+5;
 
int li[maxn];
int si[maxn];
  
ll dist[maxn];
ll dist2[maxn];
int n;
int rm[maxn];
void dijkstra(int x){
	priority_queue <pair<ll,int>>q;
	q.push({0,x});
	dist[x]=0;
	bool vis[n];
	for(int i=0;i<n;i++){
		vis[i]=0;
		rm[i]=0;
	}
 
	while(!q.empty()){
		pair<int,int> cur = q.top();
		q.pop(); 
		int in =cur.second;
		// int ww=cur.second.second;
		if(vis[in])continue;
		vis[in]=1;
 
		for(auto ele : edg[in]){
			if(dist[ele.first]>ele.second+dist[in]){
			dist[ele.first]=ele.second+dist[in];
			q.push({-dist[ele.first],ele.first});
			}
		}
	}
}
 
 void dijkstra2(int x){
	priority_queue <pair<ll,int>>q;
	q.push({0,x});
	dist2[x]=0;
	bool vis[n];
	for(int i=0;i<n;i++){
		vis[i]=0;
	}
 
	while(!q.empty()){
		pair<int,int> cur = q.top();
		q.pop(); 
		int in =cur.second;
		// int ww=cur.second.second;
		if(vis[in])continue;
		vis[in]=1;
 
		for(auto ele : edg2[in]){
			if(dist2[ele.first]>ele.second+dist2[in]){
			dist2[ele.first]=ele.second+dist2[in];
			q.push({-dist2[ele.first],ele.first});
			}
		}
	}
}
 
void solu(){
	int m;
	cin>>n>>m;
	int a,b,c;
	for(int i=0;i<n;i++){
		dist[i]=1e15;
		dist2[i]=1e15;
	}
	edg.resize(n);
	edg2.resize(n);
	vector<pair<int,pair<int,int>>>v;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		a--;
		b--;
		edg[a].push_back({b,c});
		v.push_back({a,{b,c}});
		edg2[b].push_back({a,c});
	}	
 
	dijkstra(0);
	dijkstra2(n-1);
	// for(int i=0;i<n;i++){
	// 	cout<<dist[i]<<" ";
	// }
	// cout<<endl;
	// for(int i=0;i<n;i++){
	// 	cout<<rm[i]<<" ";
	// }
	// // if(rm[n-1]%2!=0)rm[n-1]++;
	// cout<<dist[n-1]-(rm[n-1]/2)<<endl;
	ll ans=1e15;
	for(int i=0;i<m;i++){
		int w=v[i].second.second;
		int aa=v[i].first;
		int bb=v[i].second.first;
		ans=min(ans, dist[aa]+dist2[bb]+(w/2));
		// ans=min(ans, dist2[aa]+dist[bb]+(w/2));
	}
	cout<<ans<<endl;
	// cout<<dist[n-1]-(rm[i])
}
int main(){
		// ios_base::sync_with_stdio(0);
		// cin.tie(0);
 
// freopen("moocast.in","r",stdin);
// freopen("moocast.out","w",stdout);
		// int cass;
		// cin>>cass; 
		// for(int i=0;i<cass;i++)
		solu();
    return 0; 
}
