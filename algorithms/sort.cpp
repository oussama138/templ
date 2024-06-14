#include<iostream>
using namespace std;

#define ll long long

int main(){
	ll temp=0;
	ll n;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

for(int j=0;j<n;j++){
	for(int i = 0; i<n;i++){
		if(arr[i]>arr[i+1]){
		       temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
}
for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
}
	return 0;
}