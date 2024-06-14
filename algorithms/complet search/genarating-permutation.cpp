#include <bits/stdc++.h>
using namespace std;


vector<int>permutation;
void permutationf(int a[], int n , bool chosen[]){
	if(permutation.size()==n){
		for(int i=0;i<permutation.size();i++){
			cout<<permutation[i]<<" ";
		}
		cout<<endl;
	}
	else{
		for(int i=0;i<n;i++){
			if(chosen[i])continue;
			permutation.push_back(a[i]);
			chosen[i]=true;
			permutationf(a,n,chosen);
			chosen[i]=false;
			permutation.pop_back();
		}
	}
}

int main(){
	int a[]={1,2,3};
	int n = sizeof(a)/sizeof(a[0]);
	int startindex = 0;
	bool chosen[n];
	for(int i=0;i<n;i++){
		chosen[i]=false;
	}
	permutationf(a,n,chosen);

	 return 0;
 }