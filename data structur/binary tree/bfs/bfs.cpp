#include<iostream>
#include<algorithm>
#include<queue>
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
void bfs(node* root){
	if(root == NULL) return;
	queue<node*>q;
	q.push(root);
	while (q.empty()==false)
	{
		node* curr q.front();
		cout<<curr->data<<" ";
		q.pop();

		// cout<<curr<<endl;
		if(curr->left != NULL){
			q.push(curr->left);
		}
		if(curr->right != NULL){
			q.push(curr->right);
		}
	}

}
int main(){
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

	bfs(root);


	return 0;
}
