#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(){
	std::queue<int>  q,qq;
	q.push(4);
	q.push(6);
	q.push(62);
	q.emplace(9);
	qq.push(3);
	qq.push(1);
	qq.swap(q);//qq=q;q=qq;
	cout<<q.size()<<endl;//2
	q.pop();
	while(!qq.empty()){
		cout<<qq.front();
		cout<<" "<<qq.back()<<endl;
		qq.pop();
	}
}