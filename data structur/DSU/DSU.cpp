#include <bits/stdc++.h>
using namespace std;
//
#define ll long long int
 
// using pii pair<int,int>;
 
 
#define endl "\n"; 
#define f first;
#define s second;
#define pb push_back;
ll  modd=1e9+7;
 
 
const int maxn = 2e5+1;
 
int li[maxn];
int si[maxn];
 
int mc=0;
int sz=0;
	
void build(int n){
	for(int i=0;i<n;i++){
		li[i]=i;
		si[i]=1;
	}
}
int find(int x){
	while(x != li[x]){
		x=li[x];
	}
	return x;
}
bool same(int a,int b){
	return find(a)==find(b);
}
void unite(int a,int b){
	a=find(a);
	b=find(b);
	if(a==b)return;
	if(si[a]<si[b])swap(a,b);
	si[a]+=si[b];
	sz=max(sz,si[a]);
	mc--;
	li[b]=a;
}
 
void solu(){  
	int n,m;
	cin>>n>>m;
	build(n);
	mc=n;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		unite(a,b);
		cout<<mc<<" "<<sz<<endl;
	}
}
int main(){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
 
// freopen("feast.in","r",stdin);
// freopen("feast.out","w",stdout);
		// int cass;
		// cin>>cass; 
		// for(int i=0;i<cass;i++)
		solu();
    return 0; 
}
