#include<iostream>
using namespace std;

int binary_search(int[],int,int);

int main(){
	int arr[1000];
	cin>>arr[];

	cout<<binary_search(arr,4,sizeof(arr)/sizeof(*arr));

	return 0;
}
int binary_search(int arr[],int n , int lenght){

	int start=0;
	int end = lenght -1;
	int middle;

	while(end >= start){
		middle = start + (end-start)/2;
		if (arr[middle]==n) return middle;
		else if(arr[middle]>n) end = middle - 1;
		else start = middle + 1;
	}
	return -1;
}