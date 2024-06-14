
#include<iostream>

using namespace std;

int lis(int arr[] , int n){

	int *lis;
	lis = (int*) malloc( n * sizeof(int));

	for(int i=0;i<n;i++){
		lis[i]=1;
	}

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){

			if(arr[i]>arr[j] && lis[i]<lis[j]+1){
				lis[i]=lis[j]+1;
			}                                                
		}
	}

	int res=0;
	for(int i=0;i<n;i++){
		if(lis[i]>res){
			res = lis[i];
		}
	}
	return res;
}

int main(){
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<lis(arr,n);

	return 0;
}