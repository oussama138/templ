 #include<iostream>

#include<string>

#include<algorithm>

using namespace std;

#define ll long long

void solu() {
    int t;
    cin>>t;
    int list[3];
    for(int i=0;i<3;i++){
        cin>>list[i];
    }
    int dp[t+1];
    for(int i=0;i<=t;i++){
        dp[i]=-1;
    }
    dp[0]=0;
    for(int i=0;i<3;i++){
        dp[list[i]]=1;
    }
    for(int i=0;i<=t;i++){
        if(dp[i]>0){
            for(int j=0;j<3;j++){
                if(i!=j){
                    dp[i+list[j]]=dp[i]+1;
                }
            }
        }

    }
 cout<<dp[t]<<endl;
}
int main() {




    return 0;
}