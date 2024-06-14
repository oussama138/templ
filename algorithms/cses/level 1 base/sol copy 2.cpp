 #include<iostream>

#include<string>

#include <cmath>

#include<algorithm>

using namespace std;

#define ll long long

void solu() {
 int c;
 int nw;
 cin>>c>>nw;
 int maxn[c];
 string s[c];
 int dif=0,def=0;
 for(int i=0;i<c;i++){
     cin>>s[i];
 }
//  cout<<s[1][2]<<endl;
     for(int d=0;d<c;d++){
        maxn[d]=0;
         for(int i=0;i<nw;i++){
             maxn[d]+=int(s[d][i]-96);
         }
     }
     for(int i=0;i<c;i++){
             maxn[i]=26*nw-maxn[i];

         }
         sort(maxn, maxn + c);
        //  std::cout << maxn[0] << std::endl;
    //  int min;
    //  min = maxn[0];
    //  for(i = 0; i < c; i++){
    //     if(maxn[i] < min){
    //         min = maxn[i];
    //     }
    // }
    // std::cout << m
              sort(s, s + c);
              std::cout << s[0] << std::endl;
              string swap;
              swap=s[0];
             int  cc=c-1;
              s[0]=s[cc/2];
              s[cc/2]=swap;
              std::cout << s[1] << std::endl;

 for(int d=0;d<c;d++){
     def=0;
     dif=0;

    for(int i=0;i<nw;i++){
        dif=0;
        if(s[d][i]==s[d+1][i]){

        }else{
            dif=s[d][i]-s[d+1][i];

                std::cout << dif << std::endl;
            if(dif<0){
                s[d+1][i]+=dif;
                std::cout << dif << std::endl;
            }else if(dif>0){
                s[d+1][i]-=dif;
                std::cout << dif << std::endl;
            }
            dif=abs(dif);
            def+=dif;

        }
    }
 std::cout << def << std::endl;
 std::cout << s[0] << std::endl;
 }

 std::cout << def << std::endl;

}
int main() {

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
    solu();
    }



    return 0;
}