#include <bits/stdc++.h>

using namespace std;
#define ll long long int
  

#define endl "\n";  
#define F first
#define S second
const int MOD=1e9+7;

 
const int maxn = 100000+9;

int main(){
		ios_base::sync_with_stdio(0);
		cin.tie(0); 

		int a=2,b=4;
		int xr=a^b;
		int orr=a|b;
		int andd=a&b;
		int inv=~a;
		int exp=a<<5;//a*2^5
		int dev=a<<5;//a/2^5

		solu();
    return 0; 
}
