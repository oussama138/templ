#include<iostream>

using namespace std;

bool psair(int n){
	if(n%2==0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	cout<<psair(4);

	return 0;
}