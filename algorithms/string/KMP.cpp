#include <bits/stdc++.h>

using namespace std;

int kmp(string s1,string s2){

	int n=s1.length();
	int m=s2.length();
	// function stop
	if(m>n)return -1;
	if(m==n){
		if(s2==s1)return 0;
		else return -1;
	}
	if(s2==" ") return 0;

	// end

	// LPS
	int lps[m];
	for(int i=0;i<m;i++)lps[i]=0;
	int i=1;
	int j=0;
	while (i<m)
	{
		if(s2[i]==s2[j]){
			j++;
			lps[i]=j;
			i++;
		}else if(j>0){
			j=lps[j-1];
		}else{
			lps[i]=0;
			i++;
		}
	}
	// lmp end
	i=0;
	j=0;
	while(i<n && j<m){
		if(s1[i]==s2[j]){
			j++;
			i++;
		}else if(j>0){
			j=lps[j-1];
		}else{
			i++;
		}
	}
	if(m<j) return -1;
	else return i-m;

}

int main(){
	string s;
	string s2;
	cin>>s>>s2;

	cout<<kmp(s,s2)<<endl;

	return 0;
}