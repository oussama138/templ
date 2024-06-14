#include <iostream>
#include<string>
// #include <cmath>
using namespace std;

 
int sol(string s1 , string s2 , int n ,int m){

    int r[n+1][m+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){

            if(j==0)
             r[i][j]=i;

            else if (i==0)
             r[i][j]=j;

             else if (s1[i-1] == s2[j-1] )
             r[i][j] = r[i-1][j-1] ;
             else
              r[i][j] = 1 + min( r[i-1][j] , min( r[i-1][j-1] , r[i][j-1] ) );

        }
    }
    return r[n][m];

}

int main()
{
    string s1;
    cin>>s1;

    string s2;
    cin>>s2;

    int n= s1.length();

    int m= s2.length();

    std::cout << sol(s1 , s2 , n ,m) << std::endl;
    return 0;
}