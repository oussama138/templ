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

const int maxn = 1e5+5;
const int K=25;

int n,m,k;
   
 

map<pair<int,int>,int>dp; 

int lg[maxn];
int st[K][maxn];
int st2[K][maxn];
int pos[maxn];


int sol(int x,int y){
	if(y-x==0)return 0;
	if(y-x==1)return 1;
	if(dp[{x,y}]!=0){
		return dp[{x,y}];
	}
	int in=lg[y-x+1];
	int mx=max(st2[in][x],st2[in][y-(1<<in)+1]);
	int in2=lg[pos[mx]-x+1];
	int mn1=min(st[in2][x],st[in2][pos[mx]-(1<<in2)+1]);
	int in3=lg[y-pos[mx]+1];
	int mn2=min(st[in3][pos[mx]],st[in3][y-(1<<in3)+1]);

	// cout<<x<<" "<<y<<" "<<mx<<" "<<pos[mn1]<<" "<<pos[mn2]<<" "<<pos[mx]<<endl;
	// return 0;
	int ans=0;
	int ans1=0;
	int ans2=0;
	mn1=pos[mn1];
	mn2=pos[mn2];

	if(mn1!=pos[mx])ans++;
	if(mn2!=pos[mx])ans++;
	// cout<<ans<<" "<<ans1<<" "<<ans2<<endl;

	if(dp[{x,mn1}]!=0){
		ans1=dp[{x,mn1}];
	}else{
		ans1=sol(x,mn1);
	}

	if(dp[{mn2,y}]!=0){
		ans2=dp[{mn2,y}];
	}else{
		ans2=sol(mn2,y);
	}
	ans+=ans1+ans2;
	dp[{x,y}]=ans;
	return ans;
}


void init_permutation(int N, std::vector<int> A){
	int n;
	n=N;
	vector<int>v;
	v=A;
	for(int i=0;i<n;i++){
		st[0][i]=v[i];
		st2[0][i]=v[i];
		pos[v[i]]=i;
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
	for(int i=1;i<=K;i++){
		for(int j=0;j+(1<<i)<=n;j++){
			st2[i][j]=max(st2[i-1][j] , st2[i-1][j+(1<<(i-1))]);
		}
	}


	// int q;
	// cin>>q;
	// for(int i=0;i<q;i++){
	// 	int l,r;
	// 	cin>>l>>r; 
	// 	cout<<sol(l,r)<<endl;
	// }

}
int calc_f(int l, int r){
	return sol(l,r);
}
 int main(){
 	init_permutation(5, {0, 3, 1, 2, 4});
 	cout<<calc_f(0, 4)<<endl;
 	cout<<calc_f(0, 3)<<endl;
 	cout<<calc_f(1, 4)<<endl;
 	cout<<calc_f(1, 1)<<endl;
 	// calc_f(1, 4);
 	// calc_f(1, 1);
 	return 0;
 }
