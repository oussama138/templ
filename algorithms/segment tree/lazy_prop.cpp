#include <bits/stdc++.h>
using namespace std;
//
#define ll long long int
 
#define endl "\n";
 
vector<vector<int> > edg;
// string s;
 
// map<int,bool>vis;
 
// bool vis[200003];
// int res[200003];
const int INF=INT_MAX;
const int maxn=2e5;
 
ll t[4*maxn];
ll a[maxn];
ll lazy[4*maxn];
 
void build(int l , int r , int p){
	lazy[p]=0;
	if(l==r){
		t[p] = a[l];
		return;
	}
	int tp = (l+r)/2;
	build(l,tp,2*p);
	build(tp+1,r,(2*p)+1);
	t[p] =(t[2*p]+t[(2*p)+1]);
}
void fix_lazy(int l,int r , int p){
	if(l==r){
		lazy[p]=0;
		return;
	}
	lazy[2*p]+=lazy[p];
	lazy[2*p+1]+=lazy[p];
	t[2*p] +=((r+l)/2-l+1)*lazy[p];
	t[2*p+1]+=(r-(r+l)/2)*lazy[p];
	lazy[p]=0;
}
 
ll sum(int l, int r ,int p, int x,int y){
	if(lazy[p]!=0){
		fix_lazy(l,r,p);
	}
	if(l>y || x>r){
		return 0;
	}
	if(l>=x && r<= y){
		return t[p];
	}
	int tl=(l+r)/2;
	ll cur;
	return cur=sum(l,tl,2*p,x,y)+sum(tl+1,r,2*p+1,x,y);
}
void upd(int l,int r,int p ,int x, int y,ll v){
	if(lazy[p]!=0){
		fix_lazy(l,r,p);
	}
	if(l>y || x>r){
		return;
	}
	if(l>=x && r<= y){
		lazy[p]+=v;
		t[p]+=(r-l+1)*v;
		return;
	}
	int tp = (r+l)/2;
	upd(l,tp,2*p,x,y,v);
	upd(tp+1,r,2*p+1,x,y,v);
	t[p]= t[2*p]+t[2*p+1];
}
 
void solu(){
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	build(0,n-1,1);
	int tt,aa,b;
	while (q--)
	{
		cin>>tt;
		if(tt==1){
			ll bb;
			cin>>aa>>b>>bb;
			upd(0,n-1,1,aa-1,b-1,bb);
		}else{
			cin>>aa;
			cout<<sum(0,n-1,1,aa-1,aa-1)<<endl;
// 			cout<<sum(0,n-1,1,aa-1,b-1)<<endl;
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
