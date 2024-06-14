 #include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define lls unsigned long long int
#define ll long long int
const int K=25;
const int MAXN=100000+1;
const int INF=1e9;
// int n,m,v;
vector<vector<int>>edg;



// for DAG (directed acyclic graph)
// time O(V+E)
// space O(V)

stack<int>s;
vector<bool>vis;

void tpsort(int n){
	vis[n]=true;
	for(auto ele : edg[n]){
		if(!vis[ele])
			tpsort(ele);
	}
	s.push(n);
}
int main(){

    	int n,m;
	cin>>n>>m;

	vis.resize(n);

	edg.resize(n);
	int a,b;
	int c;
	for(int i=0;i<m;i++){
	cin>>a>>b;
	// a--;
	// b--;
	edg[a].push_back(b);
	}

	for(int i=0;i<n;i++){
		vis[i]=false;
	}

	for(int i=0;i<n;i++){
		if(vis[i]==false){
			tpsort(i);
		}
	}
	while (!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}



  	return 0;
}