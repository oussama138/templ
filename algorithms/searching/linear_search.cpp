#include<iostream>
using namespace std;


int linear_search(int[],int,int);

int main(){
	int arr[]={32,4,5,6,8,9};
	int n;

	cin>>n;

	cout<<linear_search(arr, n ,sizeof(arr) / sizeof(*arr));

	return 0;
}

int linear_search(int arr[],int n,int length){

	for (int i = 0; i < length; i++){

		if(arr[i]==n) return i;

	}

	return -1;

}