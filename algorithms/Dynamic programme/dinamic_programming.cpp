#include <iostream>
using namespace std;

int fib(int n,int arr[])
{
	arr[1]=1;
	arr[2]=1;
	for (int i=3;i<n+1;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
		return arr[n];

}

int main()
{
	int arr[100];
	cout<<fib(7,arr);
    return 0;
}