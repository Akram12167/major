#include<iostream>
using namespace std;
class TreeNode{
	public:
		int value;
		TreeNode*left,*right;
	TreeNode(){
		value=0;
		left=NULL;
		right=NULL;
		}
	TreeNode(int v){
		value=v;
		left=NULL;
		right=NULL;
		}
};
class BST{
	public:
		TreeNode*root;
		BST(){
			root=NULL;
		}
		bool inTreeEmpty(){
			if(root==NULL){
				return true;
			}else{
				return false;
			}
		}
	void insertNode(TreeNode*new_node){
		if(root==NULL){
			root=new_node;
			cout<<"Inserted as root node"<<endl;
		}else{
			TreeNode*temp=root;
			while(temp!=NULL){
				if(new_node->value==temp->value){
					cout<<"Value already exist "<<endl;
					return;
				}else if ((new_node->value<temp->value)&&(temp->left==NULL)){
					temp->left=new_node;
					cout<<"Value inserted in the left node"<<endl;
					break;
				}else if((new_node->value<temp->value)){
					temp=temp->left;
				}else if((new_node->value>temp->value)&&(temp->right==NULL)){
					temp->right=new_node;
					cout<<"Value inserted to the right "<<endl;
					break;
				}else {
					temp=temp->right;
				}
			}
		}
	}
	void printPreOrder(TreeNode*root){
	if(root==NULL){
		return;
	}else{
		cout<<root->value<<"\t";
		printPreOrder(root->left);
		printPreOrder(root->right);
	}
}
void PrintInOrder(TreeNode*root){
	if(root==NULL){
		return;
	}else{
	
		PrintInOrder(root->left);
			cout<<root->value<<"\t";
		PrintInOrder(root->right);
	}
}
void PostOrder(TreeNode*root){
	if(root==NULL){
		return ;
	}else{
	
		PostOrder(root->left);
		PostOrder(root->right);
		cout<<root->value<<"\t";
	}
}
};

int main(){
	 int op;
	 BST obj;
	 while(true){
	 	cout<<"Press 1 Insert"<<endl;
	 	cout<<"Press 2 Display "<<endl;
	 	cin>>op;
	 	TreeNode*t=new TreeNode();
	 	switch(op)
	 	{
	 		case 1:
	 			int val;
	 			cout<<"Enter value to insert "<<endl;
	 			cin>>val;
	 			t->value=val;
	 			obj.insertNode(t);break;
	 			case 2:cout<<"Pre Order "<<endl;
	 			obj.printPreOrder(obj.root);
	 			cout<<endl;
	 			cout<<"In Order "<<endl;
	 			obj.PrintInOrder(obj.root);
	 			cout<<endl;
	 			cout<<"Post Order "<<endl;
	 			obj.PostOrder(obj.root);
	 			cout<<endl;
		 }
	 }
}
