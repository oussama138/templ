 #include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define lls unsigned long long int
#define ll long long int
const int K=25;
const int MAXN=100000+1;
const ll INF=1e17;

vector<vector<pair<ll,ll>>>edg;

vector<vector<ll>>sp;
void floyd(ll n){
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(sp[i][k]!=INF && sp[k][j]!=INF){
					sp[i][j] = min( sp[i][j], sp[i][k]+sp[k][j]);
				}
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n,m,q;
	cin>>n>>m>>q;
	edg.resize(n);


	sp.resize(n);
	for(int i=0;i<n;i++)sp[i].resize(n);
	// vector<pair<int,int>>c(n);

	ll a,b;
	ll c;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			sp[i][j]=INF;
			if(i==j)sp[i][j]=0;
		}
	}

	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		a--;
		b--;
		edg[a].push_back({b,c});
		edg[b].push_back({a,c});
		sp[a][b] = min(sp[a][b], c);
		sp[b][a] = min(sp[b][a],c);
	}
	floyd(n);
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout<<sp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	while (q--)
	{
		// int a,b;
		cin>>a>>b;
		a--;
		b--;
		if(sp[a][b]==INF){
			cout<<"-1"<<endl;
			continue;
		}
		cout<<sp[a][b]<<endl;
	}




  	return 0;
}