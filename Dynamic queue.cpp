#include<iostream>
using namespace std;
class Queue
{
	public:

	int array[90];
	int size;
	int front=-1;
	int rear=-1;
	void getsize( int s)
	{
		size=s;
	}
	int getsize()
	{
		return size;
	}
	void enqueue()
	{
		int num;
		if(rear==size-1)
		{
			cout<<"overflow:";
			
		}
		else
		{
			if(rear>front)
			front=0;
			cout<<"Enter the element :";
			cin>>num;
			rear++;
			 array[rear]=num;
		}
	}
		void dequeue()
		{
			if(front==-1||front>rear)
			{
				cout<<"underflow:";
			}
			else
			{
				 cout<<"delete element deque:";
				 cout<<"arary["<<front<<"]="<<array[front]<<endl;
				 front++;
			}
		}
		void display()
		{
		
		if(front==-1)
		{
			cout<<"empty array:";
		}
		
			for(int i=front;i<=rear;i++)
			{
				cout<<"array element are["<<i<<"]="<<array[i]<<" "<<endl;
			}
			
			
		}
		

};
int main()
{
	int size;
	Queue a;
cout<<"enter the size odf array:";
cin>>size;
a.getsize(size);
a.enqueue();
a.enqueue();
a.display();
	
}
