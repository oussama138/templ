#include <bits/stdc++.h>
using namespace std;
//
#define ll long long int
 
// using pii pair<int,int>;
 
 
#define endl "\n";  
ll  modd=1e9+7;
 
// vector<vector<int>>edg;
// vector<vector<pair<int,pair<int,int>>>>edg2;
 
// vector<pair<int,int>>pos(4);
 
const int maxn = 2e5+5;
const int K=25;
 
int n,m,k;
   
 
 
int lg[maxn];
int st[K][maxn];
 
 
 int main(){
 	int n,q;
 	cin>>n>>q;
 	vector<int>v;
 	int a;
 	for(int i=0;i<n;i++){
 		cin>>a;
 		v.push_back(a);
		st[0][i]=v[i];
 	}
	lg[1]=0;
	for(int i=2;i<=n;i++){
		lg[i]=lg[i/2]+1;
	}
	
	for(int i=1;i<=K;i++){
		for(int j=0;j+(1<<i)<=n;j++){
			st[i][j]=min(st[i-1][j] , st[i-1][j+(1<<(i-1))]);
		}
	}
 	while(q--){
 		int l,r;
 		cin>>l>>r;
 		l--;
 		r--;
 
		int in=lg[r-l+1];
		int mn1=min(st[in][l],st[in][r-(1<<in)+1]);
 		cout<<mn1<<endl;
 
 	}
 	// calc_f(1, 1);
 	return 0;
 }
