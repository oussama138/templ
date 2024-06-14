
#include <iostream>

using namespace std;



void sol(){
    int x;
    int y;
    cin>>x >> y;

    int dp[x+1][y+1];

    for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
            dp[i][j]=0;
        }
    }

    // base case
    dp[1][1] = 1;

    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(dp[i][j]!=1){
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
    }
    cout<<dp[x][y]<<endl;

    // O(nm)time
    // O(mn) space
}

int main()
{
    sol();

    return 0;
}
