//  #include<iostream>
#include <bits/stdc++.h>

#include<string>

// #include<algorithm>
#define ll long long

using namespace std;


// #define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)

// #define time__(d)for(long blockTime=NULL;(blockTime==NULL?(blockTime=clock())!=NULL:false); debug("%s:%.4fs",d,(double)(clock()-blockTime)/CLOCKS_PER_SEC))


void solu() {
    ll x,y;
    cin>>x>>y;

    string dp[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            dp[i][j] = "";
        }
    }
    dp[0][0] = "Tonya";
    dp[1][1] = "Tonya";

    

    cout<<ans<<endl;
}
int main() {
    // solu();

//   time__("solve"){
       solu();
    //  }
    return 0;
}



//