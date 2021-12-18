#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head=NULL;
node *tail=NULL;
node *temp=NULL;
node *top=NULL;

class queue{
	public:
		void insert();
		void display();
		void only_display();
};
void queue::insert(){
	int val;
	temp=new node;
	cout<<"enter a queue ";
	cin>>val;
	temp->data=val;
	temp->next=top;
	top=temp;
	if(head==NULL){
		head=temp;
		tail=temp;
	}else{
		tail->next=temp;
		tail=tail->next;
	}
}
void queue::only_display(){
if(head==NULL){
	cout<<"stack is empty ";
}
else {
	temp=head;
	while (temp!=NULL){
		cout<<temp->data<<" ";
temp=temp->next;
	}
}
}
void queue::display(){
if(top==NULL){
cout<<" empty ";}
if(temp!=NULL){
cout<<temp->data<<" ";
top=top->next;
//delete temp;
}
}

int main(){
	queue a;
	int b;
	while(1){
		cout<<endl;
		cout<<"press 1 to insert "<<endl;
		cout<<"press 2 display stick "<<endl;
		cout<<"press 3 only display "<<endl;
		cout<<"enter choice number ";
		cin>>b;
		switch(b){
			case 1: a.insert();break;
			case 2: a.display();break;
			case 3 : a.only_display();break;
		}
	}
}
