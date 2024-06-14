#include <bits/stdc++.h>
#include "secret.h"

using namespace std;
#define ll long long int
  

#define endl "\n";  
#define F first
#define S second
ll  modd=1e9+7;

 
// vector<vector<int>>edg; 
 
const int maxn = 100000+9;
 

vector<ll>a;
vector<ll>dist;
void init(int N, int M, std::vector<int> A) {
  
  int n=N;
  ll m=M;
  dist.resize(n);
  a=A;
  dist[0]=0;
  for(int i=1;i<N;i++){
  ll cur=a[i-1]+(m-1)-a[i]+1;
  ll cur2=abs(a[i-1]-a[i]);
  dist[i]=dist[i-1]+min(cur, cur2 );
  }


  return;
}

void toggle(int R) {
  return;
}

long long query(int S, int T) {

  ll ans=dist[T]-dist[S];
  // cout<<ans<<endl;
  return ans;
}
