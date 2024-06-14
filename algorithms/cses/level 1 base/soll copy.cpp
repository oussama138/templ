#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count=0;
	string st;
	char a='a';
	cin>>st;
	int c=0;
	int c1=0;
	for(int i=0;i<n;i++){
		if(st[i]==a) c=c+1;
		else c1=c1+1;

		if(c>c1){
        st[i]='b';
        c1+=1;
	count+=1;
        c-=1;

		}
        else if(c<c1){
            st[i]='a';
           c+=1;
           c1-=1;
	   count+=1;
        }
}
cout<<count<<endl;
cout<<st;


	return 0;
}