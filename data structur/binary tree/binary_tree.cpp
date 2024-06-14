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
struct node* FindMin(node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}


void inrodre(node* root){
	if(root==NULL) return;

	inrodre(root->left);
	cout<<root->data<<" ";
	inrodre(root->right);
}
/*
////////
///////SUM the tree
//////
*/
// void dfs(node *root){
// 	stack<int>s;
// 	stack.push(root);
// 	while (s.size()>0)
// 	{
// 		int curr = s.top();
// 		s.pop();

// 		cout<<curr<<endl;
// 		if(curr->right != NULL){
// 			s.push(curr->right);
// 		}
// 		if(curr->left != NULL){
// 			s.push(curr->left);
// 		}
// 	}

// }
void dfs(node* root){
	if(root == NULL) return;
	cout<<root->data <<" ";
	dfs (root->left);
	dfs(root->right);
}

int treesum(node* root){
	if(root==NULL) return 0;
	else{
		int sumleft=treesum(root->left);
		int sumright=treesum(root->right);
		return root->data +sumleft+sumright;
	}
}
/*
////////
///////tree height
//////
*/

int heightTree(node* root){
	if(root==NULL) return 0;
	else{
		int leftHeight=heightTree(root->left);
		int rightHeight=heightTree(root->right);
		return 1+ max(leftHeight,rightHeight);
	}
}

/*
////////
///////chece
//////
*/


// bool existeInTree(node* root,int val){
// 	if(root==NULL) return false;
// 	else{
// 		int inleft=existeInTree(root->left,val);
// 		int inright=existeInTree(root->right,val);
// 		if(root->data==val||root->data==inleft || root->data==inright){
// 			return true;
// 		}
// 	}
// }

/*
////////
///////revese tree
//////
*/
void reversetree(node* root){
	if(root==NULL) return;
	else{
		struct node* temp;

		reversetree(root->left);
		reversetree(root->right);
		 temp=root->left;
		root->left=root->right;
		root->right=temp;
	}
}
/*
////////
///////DELETE
//////
*/
struct node* Delete(struct node *root ,int data){
	if(root==NULL) return root;
	else if(data <root->data) root->left=Delete(root->left,data);
	else if(data >root->data) root->right=Delete(root->right,data);

	else{
		//no children cas1
		if(root->left==NULL &&root->right==NULL){
			delete root;
			root=NULL;
		}
		// case 2 One childen
		else if(root->left==NULL){
			struct node *temp=root;
			root=root->right;
			delete temp;
		}
		else if(root->right==NULL){
			struct node *temp=root;
			root=root->left;
			delete temp;

		}
		else{
			// case 3 2 children
			struct node *temp=FindMin(root->right);
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);
		}

	}
	return root;
}

int main(){
	//tree structur
	////
	//
	struct node* root=newNode(9);
	root->left=newNode(3);
	root->left->left=newNode(33);
	root->left->left->left=newNode(123);
	root->left->left->left->left=newNode(4);
	(*root).right=newNode(5);
	 root->right->right=newNode(6);
	(*root->right->right).right=newNode(8);
	(*root->right->right->right).right=newNode(19);

///    		9
//	      /   \
	     3
     //     /
      //  33
     //   /
      //  123

	///////////////
	//////////////
	///// tree functions
	///delet
	// root=Delete(root,3);
	////cout tree
	// inrodre(root);
	//////
	/////sum the tree
	/////
	// cout<<"sum: "<<treesum(root)<<" "<<endl;
	// /////height treee
	// cout<<"height: "<<heightTree(root)<<" "<<endl;
	// //// in tree
	// cout<<"exist: "<<existeInTree(root,33)<<endl;
	//revers tree
	// reversetree(root);
	// inrodre(root);
	// cout<<endl;
	// cout<<root->data<<" "<<root->*left.data<<endl;
	 dfs(root);


	return 0;
}
