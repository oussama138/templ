#include<bits/stdc++.h>
using namespace std;

class Node{
	public :
	int data;
	Node* left;
	Node* right;
Node(int val){
	left = NULL;
	right = NULL;
}
};

int main(){

	Node*root = new Node(1);
	root->left = new Node(4);
	root->right = new Node(5);

	cout<<root->left<<endl;

	return 0;
}