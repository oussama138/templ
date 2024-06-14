#include<iostream>

using namespace std;

int main(){
	int x=100;
	int c=0;
	 c=c+(x/100);
	x=x%100;
	 c=c+(x/50);
	x=x%50;
	 c=c+(x/25);
	x=x%25;
	 c=c+(x/10);
	x=x%10;
	 c=c+(x/5);
	x=x%5;
	 c=c+(x/1);
	x=x%1;
cout<<c;

}