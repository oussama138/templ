#include<iostream>
#include<stack>

using namespace std;

void solu(){

	string s;
	cin>>s;

	stack<char> st;

	int n = s.length();
	bool res = false;
	for(int i=0;i<n;i++){
		cout<<st.top()<<endl;
		if(s[i]=='[' || s[i]=='('){
			st.push(s[i]);
		}
		else if(s[i]==']' ){
			if(st.top()=='['){
			st.pop();
			}else{
				break;
			}
		}else if(s[i]==')'){
			if(st.top()=='('){
			st.pop();
		}else{
			break;
		}
		}
	}

	// cout<<stack.size()<<endl;//3
	if(res==true){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}
}

int main(){
	// int in;
	// cin>>in;
	// for(int i=0;i<in;i++){
		solu();
	// }
	// stack.pop();
	// while(!stack.empty()){
	// 	cout<<" "<<stack.top();
	// 	stack.pop();
	// }
}