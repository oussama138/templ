  #include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define lls unsigned long long int
#define ll long long int
map<int,int>mp;
// const int K=25;
const int MAXN=50+5;
const int MOD=1e9+7;
	vector<vector<int>>v;
// ll dp[MAXN];
char g[MAXN][MAXN];

map<pair<int,int>,int>vis;
bool rec(int n,int m,int x,int y,int v1,int v2,int v3,int v4,int step,char target){
	if(x<0 || x>=n || y<0 || y>=m)return 0;
	if(g[x][y]!=target)return 0;
	if(vis[make_pair(x,y)]==1) return 1;
	if(v1==0 || step==1){
		vis[make_pair(x+1,y)]=1;
		return rec(n,m,x+1,y,1,v2,v3,v4,1,target);
	}
	if(v2==0 || step==2){
		vis[make_pair(x-1,y)]=1;
		return rec(n,m,x-1,y,v1,1,v3,v4,2,target);
	}
	if(v3==0 || step==3){
		vis[make_pair(x,y+1)]=1;
		return rec(n,m,x,y+1,v1,v2,1,v4,3,target);
	}
	if(v4==0 || step==4){
		vis[make_pair(x,y-1)]=1;
		return rec(n,m,x,y-1,v1,v2,v3,1,4,target);
	}
	return 0;
}
void solu(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>g[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(rec(n,m,i,j,0,0,0,0,0,g[i][j])==1){
				cout<<"YES"<<endl;
				return;
			}
			vis.clear();
		}
	}
	cout<<"No"<<endl;
}

int main(){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		// int cass;
		// cin>>cass;
		// for(int i=0;i<cass;i++)
		solu();
    return 0;
}