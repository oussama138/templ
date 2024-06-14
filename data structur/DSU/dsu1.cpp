 #include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define lls unsigned long long int
#define ll long long int
const int K=25;
const int MAXN=10000;
ll dive=1e9+7;
int p[MAXN];
int size[MAXN];

void make_set(int n){
	for(int i=0;i<n;i++){
		p[i]=i;
		size[i]=1;
	}
}
int find(int u){
	if(u==p[u]) return u;
	else return find(p[u]);//path compression
}
void Union(int u,int v){
	int x=find(u);
	int y=find(v);
	if(x==y) return;
	//union by size
	if(size[x]>size[y]){
		p[y]=x;
		size[x]+=size[y];
	}else{
		p[x]=y;
		size[y]+=size[x];
	}
}

int main(){
	int n,q;
	cin>>n>>q;

	while(q--){
		int u,v;
		cin>>u>>v;
		Union(u,v);
	}
    return 0;
}