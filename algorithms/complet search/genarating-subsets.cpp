#include <bits/stdc++.h>
using namespace std;


vector<int>subset;
void search(int a[], int n , int index){
	if(index==n){
		for(int i=0;i<subset.size();i++){
			cout<<subset[i]<<" ";
		}
		cout<<endl;
	}
	else{
		subset.push_back(a[index]);
		search(a,n,index+1);
		subset.pop_back();
		search(a,n,index+1);
	}
}

int main(){
	int a[]={1,2,3};
	int n = sizeof(a)/sizeof(a[0]);
	int startindex = 0;
	search(a,n,startindex);

	 return 0;
 }