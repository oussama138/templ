
#include <iostream>

using namespace std;



void sol(){
    int target;
    cin>>target;

    int n;
    cin>>n;

    int list[n];
    for(int i=0;i<n;i++){
        cin>>list[i];
    }

    bool dp[n+1];
    for(int i=0;i<n;i++){
        dp[i]=false;
    }
    dp[0]=true;

    for(int i=0;i<=target;i++){
        if(dp[i]==true){
            for(int j=0;j<n;j++){
            dp[i+list[j]] =true;
            }
        }
    }
    cout<<dp[target]<<endl;

}

int main()
{
    sol();

    return 0;
}
