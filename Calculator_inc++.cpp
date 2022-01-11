#include<iostream>
using namespace std;
void menu(){
	    int a;int b;
	    int choice;
	    do{
		cout<<"ENTER A NUMBER 1 => ";
	    cin>>a;
		cout<<"ENTER A NUMBER 2 => ";
	    cin>>b;
	    cout<<endl;
		cout<<"1  ADDITATION "<<endl;
		cout<<"2  SUBSTRUCATION"<<endl;
		cout<<"3 MULTIPLICATION"<<endl;
		cout<<"4 DIVISION"<<endl;
		cout<<"5 PROGRAM IS CLOSE"<<endl;
		cout<<endl;
		cout<<"ENTER A CHOICE NUMBER => ";
		cin>>choice;
		system("cls");
    	switch(choice){
		case 1:cout<<"ADDITATION OF TWO NUMBER => "<<a+b<<endl;
		cout<<endl;break;
		case 2:cout<<"SUBSTRUCATION OF TWO NUMBER => "<<a-b<<endl;
		cout<<endl;break;
		case 3:cout<<"MULTIPLICATION OF TWO NUMBER => "<<a*b<<endl;
		cout<<endl;break;
		case 4:cout<<"DIVISION OF TWO NUMBER => "<<a/b<<endl;
		cout<<endl;break;
		case 5:exit(0);
		default:cout<<"IS NOT MATCH"<<endl;
		cout<<endl;break;
	    }
	    }
	    while(true);
        }
int main(){
menu();
        }
