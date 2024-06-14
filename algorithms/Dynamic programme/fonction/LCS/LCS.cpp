
#include <iostream>
#include <string>
#include<cmath>


using namespace std;


int lcs(string X,string Y , int m , int n){
    int l[m][n];

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                l[i][j]=0;
            }else if(X[i-1]==Y[j-1]){
                l[i][j]=l[i-1][j-1]+1;
            }else{
                l[i][j] = max(l[i-1][j],l[i][j-1]);
            }
        }
    }
            return l[m][n];
}

int main()
{
    string X;
    string Y;
    cin>>X;
    cin>>Y;

    int m = X.length();
    int n = Y.length();

    cout<<lcs(Y,X,n,m);

    return 0;
}
