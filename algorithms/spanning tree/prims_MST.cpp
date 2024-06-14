 #include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define lls unsigned long long int
#define ll long long int
const int K=25;
const int MAXN=100000+1;
const int INF=1e9;
ll dive=1e9+7;

struct edge{
	int a,b,c;
};

// int n,m,v;
vector<vector<pair<int,int>>>edg;


void primMST(int n,int src){

	int sum = 0;

	// priority_queue < pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> pq;
	priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;

	vector<int> key(n,INF);
	vector<bool> inMST(n,false);

	pq.push({0,src});
	key[src]=0;
	while (!pq.empty())
	{
		int u = pq.top().second;
		// cout<<u<<endl;
		pq.pop();
		if(inMST[u]==true){
			continue;
		}
		inMST[u]=true;
		sum+=key[u];

		for(auto ele : edg[u]){
			int w = ele.second;
			int v = ele.first;

			if(inMST[v]==false && key[v]>w){
				key[v]=w;
				pq.push({w , v});
				// sum+=w;
			}
		}
	}
	cout<<sum<<endl;



}
int main(){

    	int n,m;
	cin>>n>>m;
	n++;

	edg.resize(n);
	int a,b;
	int c;
	for(int i=0;i<m;i++){
	cin>>a>>b>>c;
	// a--;
	// b--;
	edg[a].push_back({b,c});
	edg[b].push_back({a,c});
	}

	primMST(n,0);


  	return 0;
}