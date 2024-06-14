#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cin>>n;
	string arr[100000];
	int x=0;
	string p="X++";
	string m="X--";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==p  || arr[i]=="++X"){
			x +=1;
		}
		else if(arr[i]==m || arr[i]=="--X"){
			x-=1;
		}
	}
	cout<<x;
	return 0;
}
