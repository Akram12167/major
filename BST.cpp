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

void search(TreeNode *temp, int se){
	if(root==NULL){
		cout<<"Nothing to search:"<<endl;
	}
	if(se<root->value){
		cout<<"Element found in the left of a tree:"<<endl;
	}
	if(se > root->value){
		cout<<"Element found in the right of a tree:"<<endl;
	}
	else{
		cout<<"Element is equal to the root element:"<<endl;
	}
}
void Delete(int key)
{
	if(root==NULL){
		cout<<"the tree is empty:"<<endl;
	}
	else{
		Delete_leaf(key,root);
	}
}
int Delete_leaf(int data, TreeNode *root){
	if(data==root->value){
		if(data==root->value && root->left==NULL & root->right==NULL){
			delete root;
			cout<<"value is deleted:"<<endl;
			root=NULL;
		}
		else if(data==root->value && root->left!=NULL & root->right!=NULL || root->left !=NULL || root->right!=NULL){
			if(root->right != NULL){
				swap(root->value,root->right->value);
				Delete_leaf(data,root->right);
			}
			else{
				delete root;
				cout<<"Value deleted:"<<endl;
			}
		}
		else if(data==root->value && root->left==NULL && root->right->right !=NULL && root->right->left !=NULL){
			TreeNode *curr;
			curr=root->right;
			delete root;
			cout<<"value is deleted:"<<endl;
			root=curr;
		}
		else if(data==root->value && root->right==NULL && root->left->left !=NULL && root->left->right !=NULL){
		TreeNode *curr;
			curr=root->left;
			delete root;
			cout<<"value is deleted:"<<endl;
			root=curr;	
		}
		else if(data < root->value){
			if(data==root->left->value && root->left->left !=NULL && root->left->right == NULL){
				TreeNode *curr=root->left->left;
				delete root->left;
				cout<<"value is deleted:"<<endl;
				root->left=curr;
			}
			else {
				Delete_leaf(data,root->left);
			}
			}
		else if(data >= root->value){
			if(data==root->right->value && root->right->right !=NULL && root->right->left == NULL){
				TreeNode *curr=root->right->right;
				delete root->right;
				cout<<"value is deleted:"<<endl;
				root->right=curr;
			}
			else{
				Delete_leaf(data,root->right);
			}
		}
	}
}
};

int main(){
	 int op;
	 BST obj;
	 while(true){
	 	cout<<"Press 1 Insert"<<endl;
	 	cout<<"Press 2 Display "<<endl;
	 	cout<<"Press 3 Search "<<endl;
	 	cout<<"Press 4 Delete "<<endl;
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
	 		case 3:
	 			int val1;
	 			cout<<"enter value to serach:"<<endl;
	 			cin>>val1;
	 			obj.search(obj.root, val1);
	 			break;
	 		case 4:
	 			int val2;
	 			cout<<"Enter value to delete:"<<endl;
	 			cin>>val2;
	 			obj.Delete(val2);
	 			break;
		 }
	 }
}
