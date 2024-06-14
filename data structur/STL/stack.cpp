#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<int> stack;
	stack.push(4);
	stack.push(6);
	stack.push(9);
	cout<<stack.size()<<endl;//3
	stack.pop();
	while(!stack.empty()){
		cout<<" "<<stack.top();
		stack.pop();
	}
}