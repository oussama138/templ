#include <bits/stdc++.h>
// #include "purwokerto.h"

using namespace std;
#define ll long long int
  

#define endl "\n";  
#define F first
#define S second
ll  modd=1e9+7;

 
// vector<vector<int>>edg; 
 
const int maxn = 100000+9;
 

int n,m,k;


std::pair<long long, int> purwokerto(int N, int M, std::vector<int> T) {
	int n=N;
	int m=M;
	ll ans=0;
	ll cu=0;
	int cs=0;
	int cs2=0;
	ll res=1;

	int cc1=n;
	int co=0;
	// set<int, greater<int>>s;
	for(int i=0;i<m;i++){
		if(T[i]==0){
			cc1--;
			if(co>0){
				co--;
			}
			// cs++;
			// if(cs2>0){
			// 	res=(res*cs2)%modd;
			// 	res%=modd;
			// 	cs2=0;
			// }
		}else{
			if(cc1<n){
				ans+=n-co;
				co++;
				cc1++;
			}

		}
	}
	int res2=res;
	return {ans,res2};
}
