#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
class stack{
	node* top;
	public:
		stack(){
			top=NULL;
		}
		void push();
		void pop();
		void display();
};
void stack::push(){
	node* temp;
	temp=new node;
	cout<<"Enter data :"<<endl;
    cin>>temp->data;
    temp->next=top;
   top=temp;
}
void stack::pop(){
	if(top!=NULL){
		node* temp=top;
		top=top->next;
		cout<<temp->data<<endl;
		delete temp;
	}else
	cout<<"stack is empty "<<endl<<endl;
}
void stack::display(){
	node* temp=top;
	if(temp==NULL){
		cout<<"NULL"<<endl;
	}
	
		while(temp!=NULL){
			cout<<temp->data<<endl;
			temp=temp->next;
		}
}
int main(){
	stack st;
	int input;
	do{
		cout<<"stack option "<<endl;
		cout<<"Press 1 PUSH:"<<endl;
		cout<<"Press 2 POP:"<<endl;
		cout<<"Press 3 DISPLAY:"<<endl;
		cout<<"Press 4 EXIT:"<<endl;
		cin>>input;
		switch(input){
			case 1:st.push();break;
			case 2:st.pop();break;
			case 3:st.display();break;
		}
	}while(input!=4);
}
