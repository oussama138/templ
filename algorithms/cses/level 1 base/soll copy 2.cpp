#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

void solu(){
	int len;
	int lenr;
	int lenb;
	cin>>len>>lenr>>lenb;
	int lenrP=lenr;
	int lenbP=lenb;
	string s="";
	string ss="";
	for(int i=0;i<len;i++){
		if(lenr>0){
			s+='R';
			lenr--;
		}
		if(lenb>0){
			s+='B';
			lenb--;
		}
	}
	for(int d=0;d<len;d++){
	for(int i=0;i<len;i++){
	    if(s[len-1]==s[len-2] && s[len-1]=='R'){
	        if(lenrP>0){
			ss+='R';
			ss+='R';
			lenrP--;
			lenrP--;
		}
		if(lenbP>0){
			ss+='B';
			lenbP--;
		}
	    }
	    else if(s[len-1]==s[len-2] && s[len-1]=='B'){
	        if(lenr>0){
			ss+='B';
			lenrP--;
		}
		if(lenb>0){
			ss+='B';
			ss+='B';
			lenbP--;
			lenbP--;
		}
	    }
	}
}
	    if(s[len-1]==s[len-2] ){
	cout<<ss<<endl;
	    }
	    else{
	        std::cout << s << std::endl;
	    }
}


int main(){

	int n;
	cin>>n;

    for(int i=1;i<n+1;i++){
        solu();
    }


	return 0;
}
