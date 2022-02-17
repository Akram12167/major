#include<iostream>
using namespace std;
	class treenode{
		public:
			int value;
			treenode *left;
		treenode *right;
		treenode(){
			value=0;
		
			left=NULL;
				right=NULL;
		}
		treenode(int v){
			value=v;
			left=NULL;
			right=NULL;
		}};

class BST{
	public:
		treenode *root;
		BST(){
			root=NULL;
		}
		bool isemptyisfull(){
			if(root==NULL){
				return true;
			}else{
				return false ;
			}}
		void insert( treenode *new_node){
			if(root==NULL){
				root=new_node;
				cout<<"value insert in root ";
			}else{
			treenode *temp=root;
			while(temp!=NULL){
			 if(new_node->value==temp->value){
			 	cout<<"value is already exit in root ";
			 	return;
			 }	
			 else if ((new_node->value<temp->value)&&(temp->left==NULL)){
			 	temp->left=new_node;
			 	cout<<"value insert left of the tree ";
			 	
			 	break;
			 }
			 else if (new_node->value<temp->value){
			 	temp=temp->left;
			 	
			 }
			 else if((new_node->value>temp->value)&&(temp->right==NULL)){
			 		temp->right=new_node;
			 	cout<<"value insert tree of the right";
			 
			 	break;
			 }else{
			 	temp=temp->right;
			 }}}}
		void preorder(treenode *r){
			if(r==NULL){
				return;
			}
			cout<<r->value<<" ";
			preorder(r->left);
			preorder(r->right);
		}
		void inorder( treenode *r){
			if(r==NULL){
				return;
				}
				inorder(r->left);
				cout<<r->value<<" ";
				inorder(r->right);
		}
		void postorder(treenode *r){
			if(r==NULL){
				return ;
			}
			postorder(r->left);
			postorder(r->right);
			cout<<r->value<<" ";	
		}
		void search(treenode *temp, int se){
			if(se==NULL){
				cout<<" tree is empty nothing search ";
			}
			
			else if (se<temp->value){
				cout<<" search element to the left tree ";
							}
		else if(se>temp->value){
				cout<<"search element to the right of the tree ";
			}else if (se==temp->value) {
				cout<<" search element to the equal of root tree  ";
			}else{
				cout<<" this value not include ";
			}	}
			};

int main(){
	BST obj;
	exit:
	int val1;
	while(true ){
		cout<<endl;
		cout<<" press 1 to insert tree "<<endl;
		cout<<"press 2 to display tree "<<endl;
		cout<<"press 3 to search  tress "<<endl;
		cout<<"press 4 to close program "<<endl;
		cout<<" choice any option ";
		cin>>val1;
		treenode *d=new treenode;
		switch(val1){
			cout<<endl;
			case 1 : int a;
			cout<<" enter value to insert tree "<<endl;
			cin>>a;
			d->value=a;
			obj.insert(d);
			break;
		case 2:
			int b;
			while(true ){
				cout<<endl;
				cout<<"press 1 to preorder "<<endl;
				cout<<"press 2 to inorder "<<endl;
				cout<<" press 3 to postorder "<<endl;
				cout<<"press 4 to exit other"<<endl; 
				cout<<" choice option to display tree";
				cin>>b;
				switch (b){
					case 1: cout<<"postorder  ";
					cout<<endl;
					obj.preorder(obj.root);break;
					case 2: cout<<" inorder  ";
					cout<<endl;
					obj.inorder(obj.root);break;
					case 3: cout<<"postorder ";
					cout<<endl;
					obj.postorder(obj.root);break;
					case 4: goto exit;
			}}
			case 3: 
			cout<<endl;
			int c;
			cout<<"enter value to search "<<endl;
			cin>>c;
			obj.search(obj.root, c);
			break;
			case 4 : exit(0);
	}	}}
