#include <bits/stdc++.h>
using namespace std;
//
#define ll long long int

#define endl "\n";

int n,m;
int maxn=300004;
vector<vector<int>>edg;
// string s;
const int mod = 1000000007;

// map<int,bool>vis;

// bool vis[200003];
// int res[200003];

void solu(){
	char g[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>g[i][j];
		}
	}
	string  ans= "Z";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			string cur;
			cur+=g[i][j];
			for(int i1=0;i1<3;i1++){
				for(int j1=0;j1<3;j1++){
					if(i1==i+1 || i1==i-1 || j1==j+1 || j1==j-1){
						string cur2 =cur+g[i1][j1];

				for(int i2=0;i2<3;i2++){
				for(int j2=0;j2<3;j2++){
					if(i2==i1+1 || i2==i1-1 || j2==j1+1 || j2==j1-1){
						cur2+=g[i2][j2];
						if(cur2<ans){
							ans=cur2;
						}
					}
				}

			}
					}
				}
			}
		}
	}
	cout<<ans<<endl;

}
int main(){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
// 		int cass;
// 		cin>>cass;
// 		for(int i=0;i<cass;i++)
		solu();
    return 0;
}
