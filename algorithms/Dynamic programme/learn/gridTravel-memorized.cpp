/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int dp[1000][1000];

int gridTravel(int x ,int y){

    if(x==1 || y==1) return 1 ;
    if(x==0 || y==0) return 0 ;

    // int gt1 =
    // int gt2 = ;
    // int total = gt1+gt2;

    if(dp[x][y] !=0){
        return dp[x][y];
    }
   
    else{
    dp[x][y] = gridTravel(x-1,y) + gridTravel(x,y-1);
    return dp[x][y];
    }



}

void sol(){
    int x;
    int y;
    cin>>x >> y;

    std::cout << gridTravel(x,y) << std::endl;
}

int main()
{
    sol();

    return 0;
}
