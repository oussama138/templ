#include<iostream>
#include<string>
using namespace std;


int search(int ,int[],int);
int main(){
	int arr[]={3,7,8,8,9,6,3,1,9};
	int lenght = sizeof(arr)/sizeof(*arr);
	cout<<search(9,arr, lenght);

	return 0;
}

int search(int target,int arr[],int lenght){
	for(int i=0;i<lenght;i++){
		if(arr[i]==target){
			return i+1;
		}
	}
	return -1;
}