 #include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define lls unsigned long long int
#define ll long long int
const int K=25;
const int MAXN=100000+1;
const ll INF=1e17;

vector<vector<pair<ll,ll>>>edg;

void dijkstras(ll n,ll src){

	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, greater<pair<ll,ll>>>pq;
	vector<ll>dis(n,INF);
	dis[src]=0;
	// vector<bool>vis(n,false);
	pq.push({0,src});

	while (!pq.empty())
	{
		pair<ll,ll>cur;
		cur = pq.top();
		pq.pop();
		// vis[cur.second]=1;
		if(dis[cur.second]<cur.first)continue;
		for(auto ele : edg[cur.second]){
			if(cur.first+ele.second<dis[ele.first]){
				// dis[ele.first] = min(cur.first+ele.second,dis[ele.first]);
				dis[ele.first]=cur.first+ele.second;
				pq.push({dis[ele.first],ele.first});
			}
		}
	}
		for(int i=0;i<n;i++){
			if(dis[i]==INF){
				cout<<-1<<endl;
			}else{
			cout<<dis[i]<<" ";
			}
		}
}
int main(){

	ll n,m;
	cin>>n>>m;
	edg.resize(n);
	// vector<pair<int,int>>c(n);

	ll a,b;
	ll c;

	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		a--;
		b--;
		edg[a].push_back({b,c});
		edg[b].push_back({a,c});
	}
	dijkstras(n,0);



  	return 0;
}