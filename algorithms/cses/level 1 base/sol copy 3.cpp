 #include<iostream>

#include<string>

#include<algorithm>

using namespace std;

#define ll long long

int sol(int arr[],int res,int len){
    for(int i=0;i<len;i++){
        if(arr[i]==0){
             if(i>=1 &&arr[i-1]!=0){
                arr[i-1]=0;
                res++;
                return sol(arr,res,len);
             }
            else if(i>=1 && arr[i+1]!=0){

            arr[i+1]=0;
            res++;
            return sol(arr,res,len);
            }
            else if(i==0&&arr[i+1]!=0){
                arr[i+1]=0;
                res++;
                return sol(arr,res,len);
            }
        }
    }
    for(int i=0;i<len;i++){

    if(arr[i]==arr[i-1] && arr[i]!=0||arr[i]==arr[i+1]&&arr[i]!=0){
              if(i>=1){
                arr[i-1]=0;
                res++;
                return sol(arr,res,len);
            }else{
                arr[i+1]=0;
                res++;
                return sol(arr,res,len);
            }
    }
}
  for(int i=0;i<len;i++){

    if(arr[i]>arr[i+1]){
                arr[i]=arr[i+1];
                res++;
                return sol(arr,res,len);
    }
else if(arr[i]<arr[i+1]){
                arr[i+1]=arr[i];
                res++;
                return sol(arr,res,len);
}
    }
    return res-1;
}


void solu() {
    int x;
    cin>>x;
    int arr[x];
    for(int e=0;e<x;e++){
        cin>>arr[e];
    }
    int res;
    res=0;
    cout<<sol(arr,res,x)<<endl;
    res=0;
}
int main() {

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        solu();
    }

    return 0;
}
