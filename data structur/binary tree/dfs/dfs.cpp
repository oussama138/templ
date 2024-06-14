#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

struct node
{
	int data;
	struct node* left;
	struct node* right;

};
struct node* newNode(int idata)
{
	struct node* node=new struct node;
	node->data=idata;
	node->left=NULL;
	node->right=NULL;
	return node;
};

/*
////////
///////SUM the tree
//////
*/
void itadfs(node* root){
	stack<node*>s;
	s.push(root);
	while (s.empty()==false)
	{
		node* curr = s.top();
		cout<<curr->data<<" ";
		s.pop();

		// cout<<curr<<endl;
		if(curr->right != NULL){
			s.push(curr->right);
		}
		if(curr->left != NULL){
			s.push(curr->left);
		}
	}
}

void preOrder(node* root){
	if(root == NULL) return;
	cout<<root->data <<" ";
	preOrder (root->left);
	preOrder(root->right);
}
void inOrder(node* root){
	if(root == NULL) return;
	inOrder (root->left);
	cout<<root->data <<" ";
	inOrder(root->right);
}
void postOrder(node* root){
	if(root == NULL) return;
	postOrder (root->left);
	postOrder(root->right);
	cout<<root->data <<" ";
}


//
//  probleam pratice sumtree probleam
//
int sumtree(node* root){
	if(root  == NULL) return 0;
	return sumtree(root->left) + root->data + sumtree(root->right);
}



int main(){
	//tree structur
	////
	//
	struct node* root=newNode(9);
	root->left=newNode(3);
	root->left->left=newNode(1);
	root->left->left->left=newNode(2);
	root->left->left->right=newNode(-2);
	(*root).right=newNode(5);
	 root->right->right=newNode(6);
	(*root->right->right).right=newNode(8);
///    		9
//	      /   \
//	     3    5
//          /       \
//          1      6
//        /   \      \
//       2    -2      8
//

	 preOrder(root);
	 cout<<endl;
	 inOrder(root);
	 cout<<endl;
	 postOrder(root);
	 cout<<endl;
	//
	// Pratice sum tree
	//
	cout<<sumtree(root)<<endl;
	itadfs(root);


	return 0;
}
