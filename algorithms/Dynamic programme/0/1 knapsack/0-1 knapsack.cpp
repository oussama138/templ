#include <iostream>
// #include <cmath>
using namespace std;

// int max(int a, int b)
// {
//     return (a > b) ? a : b;
// }

int sol(int w[],int p[],int n ,int c){

    int v[n+1][c+1];

    for(int i=0;i<=n;i++){

        for(int j=0;j<=c;j++){

            if(j==0 || i==0){
                v[i][j]=0;
            }
            else if(w[i-1]<=j){
                v[i][j] = max(v[i-1][j] , v[i-1][j-w[i-1]] + p[i-1]);
            }
            else{
                v[i][j]=v[i-1][j];
            }

        }
    }

    return v[n][c];
}

int main()
{
    int n,c;
    cin>>n>>c;
    int w[n];
    int p[n];
    int c;
    for(int i = 0;i<n;i++){
        cin>>w[i]>>p[i];
    }
    // for(int i = 0;i<n;i++){
    //     cin;
    // }
    // cin>>c;

    std::cout << sol(w,p,n,c) << std::endl;
    return 0;
}