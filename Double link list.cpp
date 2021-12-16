#include<iostream>
using namespace std;
struct node {
	int info;
	struct node *next;
	struct node *prev;
	
}*head;

class double_llist{
	public:
		void create_list(int value);
		void display_dlist();
	 	void delete_element(int value);
	 	void add_begin(int value);
	 	void add_after(int value, int pos);
	 	double_llist(){
	 		head=NULL;
		 }
 	};
	
	int main()
	{
		int choice , element , position;
		double_llist dl;
		while(1)
		{
		 cout<<"operation of double linked list"<<endl;
			 cout<<"1.creat node"<<endl;
			  cout<<"2.display node"<<endl;
			  cout<<"3.delete nodes"<<endl;
			  cout<<"4 add value at the begining "<<endl;
			  cout<<"5 add value after a postion "<<endl;
			  cout<<"6.quit"<<endl;
			  cout<<"enter your choice : ";
			  cin>>choice;
			  switch (choice)
			  {
			  	case 1:
			  		cout<<"enter the element : ";
			  		cin>>element;
			  		dl.create_list(element);
			  		cout<<endl;
			  		break;
			  		
			  	case 2:
			  		dl.display_dlist();
			  		cout<<endl;
			  		break;
			  	case 3:
			  		if (head == NULL)
					  {
					  	cout<<"list is empty, nothing to delet"<<endl;
					  	break;
					  	
					  }
					  cout<<"enter the element of deletion: ";
					  cin>>element;
					  cout<<endl;
					  break;
					  case  4: 
					  cout<<"enter the element ";
					  cin>>element;
					  dl.add_begin(element);
					  cout<<endl;
					  break;
					  case 5 : 
					  cout<<"enter the element ";
					  cin>>element;
					  cout<<"insert element  after position ";
					  cin>>position;
					  dl.add_after(element, position );
					  cout<<endl;
					  break;
				case 6:
					exit(1);
					defoult:
						cout<<"weong choice"<<endl;	  	
			  }
			  
		}
	}
	




 
void double_llist::create_list(int value)
{
	struct node *current, *temp;
	temp=new(struct node);
	temp->info=value;
	temp->next=NULL;
	if(head==NULL)
	{
		temp->prev=NULL;
		head = temp;
	}
	else
	{
		current = head;
		while(current->next!=NULL)
		{
			current=current->next;
			
		}
		current->next=temp;
		temp->prev=current;
	}
}

void double_llist::display_dlist()
{
	struct node *current;
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}
	current=head;
	while(current!=NULL)
	{
		cout<<current->info<<'\t';
		current=current->next;
	}
	 cout<<"null "<<endl;
	 
}
	
	void double_llist::delete_element(int value)
	{
		struct node *temp,*current;
		if(head->info==value)
		{
			temp =head;
			head=head->next;
			head->prev=NULL;
			delete temp;
			cout<<"element delete";
			return ;
		}
		current=head;
		while(current->next->next!=NULL)
		{
			if(current->next->info==value)
			{
				temp=current->next;
				current->next=temp->next;
				delete temp;
				cout<<"element deleted";
				return;
				
			}
			current=current->next;
		}
	}
	void double_llist::add_begin(int value){
		if(head==NULL){
			cout<<"first create the list ";
			return ;
		}
		struct node*temp;
		temp=new (struct node);
		temp->prev =NULL;
		temp->info=value;
		temp->next=head;
		head->prev=temp;
		head=temp;
		cout<<"value inserted "<<endl;
	}
	void double_llist::add_after(int value,int pos){
		if(head==NULL){
			cout<<"head is null "<<endl;
		}
		struct node*temp,*current;
		current=head;
		for(int i=0;i<pos-1;i++){
			current=current->next;
			if(current==NULL){
				cout<<" there are less then "<<pos<<"element "<<endl;
			}
		}
		temp=new (struct node );
		temp->info=value;
		if(current->next==NULL){
			current->next=temp;
			temp->next=NULL;
			temp->prev=current;
		}
		else{
			temp->next=current->next;
			temp->next->prev=temp;
			current->next=temp;
			temp->prev=current;
		}
	}#include<iostream>
using namespace std;
struct node {
	int info;
	struct node *next;
	struct node *prev;
	
}*head;

class double_llist{
	public:
		void create_list(int value);
		void display_dlist();
	 	void delete_element(int value);
	 	void add_begin(int value);
	 	void add_after(int value, int pos);
	 	double_llist(){
	 		head=NULL;
		 }
 	};
	
	int main()
	{
		int choice , element , position;
		double_llist dl;
		while(1)
		{
		 cout<<"operation of double linked list"<<endl;
			 cout<<"1.creat node"<<endl;
			  cout<<"2.display node"<<endl;
			  cout<<"3.delete nodes"<<endl;
			  cout<<"4 add value at the begining "<<endl;
			  cout<<"5 add value after a postion "<<endl;
			  cout<<"6.quit"<<endl;
			  cout<<"enter your choice : ";
			  cin>>choice;
			  switch (choice)
			  {
			  	case 1:
			  		cout<<"enter the element : ";
			  		cin>>element;
			  		dl.create_list(element);
			  		cout<<endl;
			  		break;
			  		
			  	case 2:
			  		dl.display_dlist();
			  		cout<<endl;
			  		break;
			  	case 3:
			  		if (head == NULL)
					  {
					  	cout<<"list is empty, nothing to delet"<<endl;
					  	break;
					  	
					  }
					  cout<<"enter the element of deletion: ";
					  cin>>element;
					  cout<<endl;
					  break;
					  case  4: 
					  cout<<"enter the element ";
					  cin>>element;
					  dl.add_begin(element);
					  cout<<endl;
					  break;
					  case 5 : 
					  cout<<"enter the element ";
					  cin>>element;
					  cout<<"insert element  after position ";
					  cin>>position;
					  dl.add_after(element, position );
					  cout<<endl;
					  break;
				case 6:
					exit(1);
					defoult:
						cout<<"weong choice"<<endl;	  	
			  }
			  
		}
	}
	




 
void double_llist::create_list(int value)
{
	struct node *current, *temp;
	temp=new(struct node);
	temp->info=value;
	temp->next=NULL;
	if(head==NULL)
	{
		temp->prev=NULL;
		head = temp;
	}
	else
	{
		current = head;
		while(current->next!=NULL)
		{
			current=current->next;
			
		}
		current->next=temp;
		temp->prev=current;
	}
}

void double_llist::display_dlist()
{
	struct node *current;
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}
	current=head;
	while(current!=NULL)
	{
		cout<<current->info<<'\t';
		current=current->next;
	}
	 cout<<"null "<<endl;
	 
}
	
	void double_llist::delete_element(int value)
	{
		struct node *temp,*current;
		if(head->info==value)
		{
			temp =head;
			head=head->next;
			head->prev=NULL;
			delete temp;
			cout<<"element delete";
			return ;
		}
		current=head;
		while(current->next->next!=NULL)
		{
			if(current->next->info==value)
			{
				temp=current->next;
				current->next=temp->next;
				delete temp;
				cout<<"element deleted";
				return;
				
			}
			current=current->next;
		}
	}
	void double_llist::add_begin(int value){
		if(head==NULL){
			cout<<"first create the list ";
			return ;
		}
		struct node*temp;
		temp=new (struct node);
		temp->prev =NULL;
		temp->info=value;
		temp->next=head;
		head->prev=temp;
		head=temp;
		cout<<"value inserted "<<endl;
	}
	void double_llist::add_after(int value,int pos){
		if(head==NULL){
			cout<<"head is null "<<endl;
		}
		struct node*temp,*current;
		current=head;
		for(int i=0;i<pos-1;i++){
			current=current->next;
			if(current==NULL){
				cout<<" there are less then "<<pos<<"element "<<endl;
			}
		}
		temp=new (struct node );
		temp->info=value;
		if(current->next==NULL){
			current->next=temp;
			temp->next=NULL;
			temp->prev=current;
		}
		else{
			temp->next=current->next;
			temp->next->prev=temp;
			current->next=temp;
			temp->prev=current;
		}
	}#include<iostream>
using namespace std;
struct node {
	int info;
	struct node *next;
	struct node *prev;
	
}*head;

class double_llist{
	public:
		void create_list(int value);
		void display_dlist();
	 	void delete_element(int value);
	 	void add_begin(int value);
	 	void add_after(int value, int pos);
	 	double_llist(){
	 		head=NULL;
		 }
 	};
	
	int main()
	{
		int choice , element , position;
		double_llist dl;
		while(1)
		{
		 cout<<"operation of double linked list"<<endl;
			 cout<<"1.creat node"<<endl;
			  cout<<"2.display node"<<endl;
			  cout<<"3.delete nodes"<<endl;
			  cout<<"4 add value at the begining "<<endl;
			  cout<<"5 add value after a postion "<<endl;
			  cout<<"6.quit"<<endl;
			  cout<<"enter your choice : ";
			  cin>>choice;
			  switch (choice)
			  {
			  	case 1:
			  		cout<<"enter the element : ";
			  		cin>>element;
			  		dl.create_list(element);
			  		cout<<endl;
			  		break;
			  		
			  	case 2:
			  		dl.display_dlist();
			  		cout<<endl;
			  		break;
			  	case 3:
			  		if (head == NULL)
					  {
					  	cout<<"list is empty, nothing to delet"<<endl;
					  	break;
					  	
					  }
					  cout<<"enter the element of deletion: ";
					  cin>>element;
					  cout<<endl;
					  break;
					  case  4: 
					  cout<<"enter the element ";
					  cin>>element;
					  dl.add_begin(element);
					  cout<<endl;
					  break;
					  case 5 : 
					  cout<<"enter the element ";
					  cin>>element;
					  cout<<"insert element  after position ";
					  cin>>position;
					  dl.add_after(element, position );
					  cout<<endl;
					  break;
				case 6:
					exit(1);
					defoult:
						cout<<"weong choice"<<endl;	  	
			  }
			  
		}
	}
	




 
void double_llist::create_list(int value)
{
	struct node *current, *temp;
	temp=new(struct node);
	temp->info=value;
	temp->next=NULL;
	if(head==NULL)
	{
		temp->prev=NULL;
		head = temp;
	}
	else
	{
		current = head;
		while(current->next!=NULL)
		{
			current=current->next;
			
		}
		current->next=temp;
		temp->prev=current;
	}
}

void double_llist::display_dlist()
{
	struct node *current;
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}
	current=head;
	while(current!=NULL)
	{
		cout<<current->info<<'\t';
		current=current->next;
	}
	 cout<<"null "<<endl;
	 
}
	
	void double_llist::delete_element(int value)
	{
		struct node *temp,*current;
		if(head->info==value)
		{
			temp =head;
			head=head->next;
			head->prev=NULL;
			delete temp;
			cout<<"element delete";
			return ;
		}
		current=head;
		while(current->next->next!=NULL)
		{
			if(current->next->info==value)
			{
				temp=current->next;
				current->next=temp->next;
				delete temp;
				cout<<"element deleted";
				return;
				
			}
			current=current->next;
		}
	}
	void double_llist::add_begin(int value){
		if(head==NULL){
			cout<<"first create the list ";
			return ;
		}
		struct node*temp;
		temp=new (struct node);
		temp->prev =NULL;
		temp->info=value;
		temp->next=head;
		head->prev=temp;
		head=temp;
		cout<<"value inserted "<<endl;
	}
	void double_llist::add_after(int value,int pos){
		if(head==NULL){
			cout<<"head is null "<<endl;
		}
		struct node*temp,*current;
		current=head;
		for(int i=0;i<pos-1;i++){
			current=current->next;
			if(current==NULL){
				cout<<" there are less then "<<pos<<"element "<<endl;
			}
		}
		temp=new (struct node );
		temp->info=value;
		if(current->next==NULL){
			current->next=temp;
			temp->next=NULL;
			temp->prev=current;
		}
		else{
			temp->next=current->next;
			temp->next->prev=temp;
			current->next=temp;
			temp->prev=current;
		}
	}
