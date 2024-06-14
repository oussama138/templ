//  #include<iostream>
#include <bits/stdc++.h>

#include<string>

// #include<algorithm>
#define ll long long

using namespace std;


// #define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)

// #define time__(d)for(long blockTime=NULL;(blockTime==NULL?(blockTime=clock())!=NULL:false); debug("%s:%.4fs",d,(double)(clock()-blockTime)/CLOCKS_PER_SEC))


void solu() {
    int n,k;
    cin>>n>>k;
    int res=0;
    bool isre = false;
    for(int i=0;i<=n;i++){
                if(res==n/2) break;

        int a=0;
        if(i%2==0 && i!=0) {
            a=i;

        for(int j=0;j<=n;j++){
                if(res==n/2) break;
        int b=0;
            if(j%2!=0&&j!=0) {
                b=j;
            if(((a+k)*b)%4==0){
                res++;
                isre=true;
                if(res==1){
                    cout<<"YES"<<endl;
                }
                cout<<a<<" "<<b<<endl;
                break;
            }

            }
        }

        }else{
              a=i;
        for(int j=0;j<=n;j++){
        int b=0;

            if(j%2==0 && j!=0){

             b=j;

            if(((a+k)*b)%4==0 && a!=0 && b!=0){
                isre=true;
                res++;
                if(res==1){
                    cout<<"YES"<<endl;
                }
                cout<<a<<" "<<b<<endl;
                if(res==n/2) break;
                break;
            }

            }
        }

        }if(isre==true){
                    isre=false;
                    i++;
                }
    }
    if(res==0){
                    cout<<"NO"<<endl;
                }
}
int main() {
    // solu();

//   time__("solve"){
    int ca;
    cin>>ca;
    for(int i=0;i<ca;i++){
       solu();
    }
    //  }
    return 0;
}



//