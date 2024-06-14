#include<iostream>

using namespace std;

void bubble_sort(int[],int);
void print_array(int[],int);

int main(){
	int arr[] = {232,3,2,7,1,2,3,5,8,6,98,6,3};

	bubble_sort(arr,sizeof(arr)/sizeof(*arr));
	print_array(arr,sizeof(arr)/sizeof(*arr));

	return 0;

}
void bubble_sort(int arr[],int legth){
	int i=0;
	bool isSwapped = true;

	while (isSwapped)
	{
		isSwapped= false;
		for (int j = 0; j < legth-i-1; j++)
		{
		  if(arr[j]>arr[j+1]){
			  int temp = arr[j];
			  arr[j]=arr[j+1];
			  arr[j+1] = temp;

			  isSwapped = true;
		  }
		}
	i++;

	}

}
void print_array(int arr[],int lenght){
	for(int i=0; i<lenght;i++){
		cout<<arr[i]<<" ";
	}
}