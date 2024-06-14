
#include <iostream>

using namespace std;

bool dp[1000];

bool canSum(int target , int* list , int n ){

    // if(dp[target]!=0){
    //     return dp[target];
    // }

    if(target==0) return true;
    if(target<0) return false;

    if(dp[target] !=0){
        return dp[target];
    }else{

    for(int i=0;i<n;i++){

        int remaind = target - list[i];
        // return remaind;
        // bool iscan = ;
        dp[i]=canSum(remaind , list,n);

        if (dp[i]==true)
        {
            return true;
        }

    }
    }
    return false;

    // brut force
        // O(n^m) time
        // O(m) space

    // memorization dp
        // O(n*m) time
        // O(m) space

}

void sol(){
    int target;
    cin>>target;

    int arrlen;
    cin>>arrlen;

    int list[arrlen];
    for(int i=0;i<arrlen;i++){
        cin>>list[i];
    }

    cout<<canSum(target , list , arrlen)<<endl;

}

int main()
{
    sol();

    return 0;
}
