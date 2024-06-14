//  #include<iostream>
#include <bits/stdc++.h>

// #include<string>

// #include<algorithm>

using namespace std;



void solu() {
    int t;
    cin>>t;
    int list[3];
    for(int i=0;i<3;i++){
        cin>>list[i];
    }

    int dp[t+1];
    // int dc[t+1];
    // for(int i=0;i<=t;i++)55{
    //     dc[i]=-1;
    // }
    for(int i=0;i<=t;i++){
        dp[i]=0;
    }
    dp[0]=0;
    for(int i=0;i<3;i++){
        dp[list[i]]=1;
    }
    for(int i=0;i<=t;i++){
        if(dp[i]>0){
            for(int j=0;j<3;j++){
                // if(i!=j){
                    dp[i+list[j]]=dp[i]+1;
                    // dc[i+list[j]] = i;
                // }
            }
        }

    }

 cout<<dp[t]<<endl;

}
int main() {
    // solu();
    int nn;
    cin>>nn;
    for(int i=0;i<nn;i++){
       solu();
    }

    return 0;
}



//