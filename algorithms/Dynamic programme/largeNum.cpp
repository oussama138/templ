#include<iostream>
using namespace std;

int maxA(int arr[]){
    int f=arr[0];
	for(int i=0;i<5;i++){
		if(f<arr[i]){
			f=arr[i];
		}
	}
return f;
}

int main(){
	int arr[]={4,9,8,3,1};
	cout<<maxA(arr);

return 0;
}