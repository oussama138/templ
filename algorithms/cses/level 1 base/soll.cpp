#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

#define ll long long

int sol(int w){
	int arr[w];
	if(w==0) return 1;
	if(w==1) return 0;
	if(arr[w]==0){
		arr[w]=2*arr[w-1];
	}
	return arr[w];

}

void solu(){
	ll w;
	ll res=0;
	cin>>w;
	if(w<=1 ||w%2!=0){
		cout<<res<<endl;
	}else{
		res=pow(2,w);
	        cout<<res<<endl;
	}
	}

int main(){
	int n;
	cin>>n;

// 	for(int i=0;i<n;i++){
        // solu();

cout<<sol(n)<<endl;


	return 0;
}
