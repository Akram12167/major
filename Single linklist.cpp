#include<iostream>
using namespace std;
class node{		
	int data;
	node *next;
	public:
		void insert();
		void append();
		void delet();
		void update();
		void show();
};
node*head=NULL;
node *tail=NULL;
node *current=NULL;
node *temp=NULL;
node *c=NULL;
int size=0;

//inserting linklist
void node::insert(){
	int val;
	cout<<"enter the value you want insert ";
	cin>>val;
	temp=new node();
	temp->next=NULL;
	temp->data=val;
	size++;
	if(head==NULL){
		head=temp;
		tail=temp;
		current=temp;}
	else{
		tail->next=temp;
		tail=tail->next;
	}}
void node::append(){
	int pos;
	int val;
	cout<<"Enter Postion of Append Data = "<<endl;
	cin>>pos;
	cout<<"Enter value   to Insert Data = "<<endl;
cin>>val;
if(size=0){
	temp=new node();
	temp->next=NULL;
	temp->data=val;
	size++;
	head=temp;
	tail=temp;
	current=temp;}
else if(pos==1&&pos<size){
	temp=new node();
	temp->next=head;
	temp->data=val;
	head=temp;
	size++;}
else if (pos>1&&pos<size){
	current=head;
	for(int i=1;i<pos;i++){
		c=current;
		current=current->next;}
	temp=new node();
	c->next=temp;
	temp->next=current;
	temp->data=val;
	size++;}
else if (pos==size){
	current=head;
	c=head;
	while(current!=NULL){
		c=current;
		current=current->next;	}
	temp=new node();
	temp->data=val;
	temp->next=NULL;
	tail->next=temp;
	tail=tail->next;
	size++;}
else{
	cout<<"Out of list "<<endl;
}}

//deleting linklist
void node::delet(){
	int pos;
	cout<<" Enter position To delete = "<<endl;
	cin>>pos;
	if(size==0){
		cout<<"No Data to Delete "<<endl;	}
	if(pos==0&&pos==size){
		temp=head;
		delete temp;
		head==NULL;
		current=NULL;
		temp=NULL;
		size--;       	}
	else if(pos==1&&pos<size){
		temp=head;
		head=head->next;
		delete temp;
		size--;    	}
	else if (pos>1&&pos<size){
		current=head;
		c=current;
		for(int i=1;i<pos;i++){
			c=current;
			current=current->next;		}
		c->next=current->next;
		delete current;
		size--;    	}
	else if(pos==size){
		current=head;
		c=current;
		for(int i=1;i<size;i++){
			c=current;
			current=current->next;		}
		tail=c;
		tail->next=NULL;
		delete current;
		size--;	}
	else{
		cout<<" No postion ";
	}}

//update the linklist
void node::update(){
	
	
}


//display the linklist
void node::show(){
	if(head==NULL){
		cout<<"no data  is exit "<<endl;
	}
	else
	{
		cout<<" ALL DATA  "<<endl;
		current=head;
		while(current !=NULL){
			cout<<current->data<<endl;
			current=current->next;
		}
	}
}
int  main(){
node n;
int a;
while(1){
	cout<<"press 1 Inserting :"<<endl;
	cout<<"press 2 Appending :"<<endl;
	cout<<"press 3 updating  :"<<endl;
	cout<<"press 4 Deleting  :"<<endl;
	cout<<"press 5 Display   :"<<endl;
	cout<<"press 6 Exit      :"<<endl;
	cin>>a;
	cout<<endl;
	switch(a){
		case 1: n.insert();break;
		case 2: n.append(); break;
		case 3: n.update();break;
    	case 4: n.delet();break;
		case 5: n.show();break;
		case 6: exit(0);break;
	}}}
