#include<iostream>
using namespace std;

int main(){

	int i,j,n,loc,temp,min,a[30];

	cout<<"enter the num of element : ";

	cin>>n;

	cout<<"\n entrer the element \n";

	for(i=0; i<n;i++){
		cin>>a[i];
	}
	for ( i = 0; i < n-1; i++){
		min=a[i];
		loc=i;
		for (j = i+1; j< n; j++)
		{
			if(min>a[j]){
				min=a[j];
				loc=j;
			}
		}
		temp=a[i];
		a[i]=a[loc];
		a[loc]=temp;

	}
	cout<<"\n sorted list is as follows \n";
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";

	}
	return 0;



}