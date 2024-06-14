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
 
int t[4*maxn];
int a[maxn];
int lazy[4*maxn];
 
void build(int l , int r , int p){
	if(l==r){
		t[p] = a[l];
		return;
	}
	int tp = (l+r)/2;
	build(l,tp,2*p);
	build(tp+1,r,(2*p)+1);
	t[p] = min(t[2*p],t[(2*p)+1]);
}
 
int minn(int l, int r ,int p, int x,int y){
	if(l>y || x>r){
		return INF;
	}
	if(l>=x && r<= y){
		return t[p];
	}
	int tl=(l+r)/2;
	int cur;
	return cur=min(minn(l,tl,2*p,x,y),minn(tl+1,r,2*p+1,x,y));
}
void upd(int l,int r,int p ,int in, int v){
	if(in<l || in>r){
		return;
	}
	if(in==l && r==in){
		t[p]=v;
		return;
	}
	int tp = (r+l)/2;
	upd(l,tp,2*p,in,v);
	upd(tp+1,r,2*p+1,in,v);
	t[p]= min(t[2*p],t[2*p+1]);
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
		cin>>tt>>aa>>b;
		if(tt==1){
			upd(0,n-1,1,aa-1,b);
		}else{
			cout<<minn(0,n-1,1,aa-1,b-1)<<endl;
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
