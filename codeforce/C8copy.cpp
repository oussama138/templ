#include <bits/stdc++.h>

using namespace std;

#define lls unsigned long long int
#define ll long long int

void solu(){
	int n;
	cin>>n;
	int arr[n];
	map<int,int>mp;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]=i;
	}
	int c;
	cin>>c;
	int cos[c];
	int maxx = 0;
	for(int i=0;i<c;i++){
		cin>>cos[i];
		if(cos[i]>maxx)maxx=cos[i];
	}
	int dp[n][maxx+1];
	// for()
	// for(int i=0;i<n;i++){
	// 	dp[i][arr[i]]=1;
	// }
	sort(arr,arr+n);
	dp[0][arr[0]]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<=maxx;j++){
			if(arr[i]>j&&i==0){
				dp[i][j]=0;
			}else if(arr[i]<j && i==0){
				dp[i][j]=dp[i][j-arr[i]];
			}else if(arr[i]>j){
				dp[i][j]=dp[i-1][j];
			}
			else if(i!=0){
				// dp[i][j]=max(dp[i][j-arr[i]] )
				// if(dp[i][j-arr[i]]>0) dp[i][j]
				dp[i][j]=dp[i][j-arr[i]]+dp[i-1][j];
				for(int k=0;k<i;k++){
					if(k!=i){
				dp[i][j]=max(dp[i][j-arr[k]] , dp[i][j]);
					}
				}
				if(j==arr[i]) dp[i][j]++;
			}
			// else if(arr[i]<j){
			// 	dp[i][j]=dp[i-1][j];
			// }
			// else if(arr[i]==j){
			// 	dp[i][j]=dp[i-1][j]+1;
			// }
			// else{
				// dp[i][j]=max(dp[i][j-arr[i]],dp[i-1][j])
			// }
			// else if(arr[i]>j){
			// 	if(dp[i][j-arr[i]]>0){
			// 		dp[i][j]=dp[i][j-arr[i]];
			// 		if(dp[i-1][j]>0 && i>0){
			// 			dp[i][j]++;
			// 		}
			// 	}
			// }
		}
	}
	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<" ";
	// 	for(int j=0;j<=maxx;j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// if(dp[i][])
	vector<int>res;
	for(int i=0;i<c;i++){
		if(dp[n-1][cos[i]]>1){
			cout<<"Ambiguous"<<endl;
		}else if(dp[n-1][cos[i]]==0){
			cout<<"Impossible"<<endl;
		}else{
			int posy=n-1;
			int posx=cos[i];
			int posv=1;
			while(posv!=0){
				posv=0;
				// cout<<dp[posy-1][posx]<<" ";
				if(dp[posy-1][posx]==1 && posy-1>=0){
					// res.push_back()
					posy--;
					posv=1;
				}else{
					for(int j=0;j<n;j++){
						// cout<<dp[posy][posx]<<" ";
						if(dp[posy][posx-arr[j]]==1 && posx-arr[j]>=0){
							posv=1;
							res.push_back(mp[arr[j]]+1);
							posx-=arr[j];
						}
					}
					if(posv==0)res.push_back(mp[arr[posy]]+1);
				}
			}
	sort(res.begin(),res.end());
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
		}
	}
}

int main(){
		// int cass;
		// cin>>cass;
		// for(int i=0;i<cass;i++)
			solu();

    return 0;
}