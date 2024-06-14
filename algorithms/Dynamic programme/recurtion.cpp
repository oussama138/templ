#include<iostream>
using namespace std;

int pow(int n,int p){
	if (p==1) return n;
	int rest = pow(n,p/2);
        if(p%2==0) return pow(n,p/2)*pow(n,p/2);
	else if(p%2!=0) return pow(n,p/2)*pow(n,p/2)*n;
	return 0;
}

int main(){

	cout<<pow(3,6);
}