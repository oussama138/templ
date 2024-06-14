#include <bits/stdc++.h>
using namespace std;
//
#define ll long long int
 
#define endl "\n";
 
const int maxn =20+2;
int k;
vector<vector<int>>edg; 

int n,m;

// bool vis[maxn][maxn];
// bool sv[maxn][maxn];
map<pair<int,int>,bool>mp;
map<pair<int,int>,bool>sv;
char g[maxn][maxn];


int dfs(int x,int y , char a){
	if(vis[x][y])return;
	if(g[a]!=g[x][y]){
		if()
	}
	vis[x][y]=1;

}
void solu(){

	// freopen("perimeter.in" , "r",stdin);
	// freopen("perimeter.out", "w",stdout);

	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>g[i][j];
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(!vis[i][j]){
			ans+=dfs(i,j , g[i][j]);
		}
		}
	}

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