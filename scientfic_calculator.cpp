#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
	int a,b,i,j,k,l,m,c,x,y,z,o,p,q,r,s,t,u,v,w;
	char ch;
	cout<<"MENU";
	cout<<"\n1.Addition";
	cout<<"\n2.Subtraction";
	cout<<"\n3.Multiplication";
	cout<<"\n4.Division";
	cout<<"\n5.Modulus";
	cout<<"\n6.Power";
	cout<<"\n7.Square Root";
	cout<<"\n8.1/x";
	cout<<"\n9.Sin";
	cout<<"\n10.Cos";
	cout<<"\n11.Tan";
	cout<<"\n12.Exp";
	cout<<"\n13.Log";
	cout<<"\n14.Absolute Value";
	cout<<"\n15.Floor Function";
	cout<<"\n16.Ceiling Function";
	cout<<"\n17.Factorial";
	cout<<"\n18.Binary";
	cout<<"\n19.Hexadecimal";
	cout<<"\n20.Octal";
	cout<<"\n21.Exit";
	do{
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
		case'1':
			cout<<"Enter two numbers:";
			cin>>a>>b;
			c=a+b;
			cout<<"Sum="<<c;
			break;
		case'2':
			cout<<"Enter two numbers:";
			cin>>a>>b;
			c=a-b;
			cout<<"Difference="<<c;
			break;
		case'3':
			cout<<"Enter two numbers:";
			cin>>a>>b;
			c=a*b;
			cout<<"Product="<<c;
			break;
		case'4':
			cout<<"Enter two numbers:";
			cin>>a>>b;
			c=a/b;
			cout<<"Quotient="<<c;
			break;
		case'5':
			cout<<"Enter two numbers:";
			cin>>a>>b;
			c=a%b;
			cout<<"Remainder="<<c;
			break;
		case'6':
			cout<<"Enter two numbers:";
			cin>>a>>b;
			c=pow(a,b);
			cout<<a<<"^"<<b<<"="<<c;
			break;
		case'7':
			cout<<"Enter the number:";
			cin>>a;
			c=sqrt(a);
			cout<<"Square root="<<c;
			break;
		case'8':
			cout<<"Enter the number:";
			cin>>a;
			if(a!=0)
			{
				c=1/a;
				cout<<"Reciprocal="<<c;
			}
			else
			{
				cout<<"Divide by zero error";
			}
			break;
		case'9':
			cout<<"Enter the number:";
			cin>>a;
			c=sin(a);
			cout<<"Sin="<<c;
			break;
		case'A':
			cout<<"Enter the number:";
			cin>>a;
			c=cos(a);
			cout<<"Cos="<<c;
			break;
		case'B':
			cout<<"Enter the number:";
			cin>>a;
			c=tan(a);
			cout<<"Tan="<<c;
			break;
		case'C':
			cout<<"Enter the number:";
			cin>>a;
			c=exp(a);
			cout<<"Exp="<<c;
			break;
		case'D':
			cout<<"Enter the number:";
			cin>>a;
			if(a<=0)
			{
				cout<<"Domain error";
			}
			else
			{
				c=log(a);
				cout<<"Log="<<c;
			}
			break;
		case'E':
			cout<<"Enter the number:";
			cin>>a;
			c=abs(a);
			cout<<"Absolute="<<c;
			break;
		case'F':
			cout<<"Enter the number:";
			cin>>a;
			c=floor(a);
			cout<<"Floor function="<<c;
			break;
		case'G':
			cout<<"Enter the number:";
			cin>>a;
			c=ceil(a);
			cout<<"Ceiling function="<<c;
			break;
		case'H':
			cout<<"Enter the number:";
			cin>>a;
			x=a;
			c=1;
			for(i=2;i<=x;i++)
			{
				c=c*i;
			}
			cout<<"Factorial="<<c;
			break;
		case'I':
			cout<<"Enter the number:";
			cin>>a;
			t=0;
			i=0;
			while(a>0)
			{
				y=a%2;
				t=t+pow(10,i)*y;
				a=a/2;
				i++;
			}
			cout<<"Binary="<<t;
			break;
		case'J':
			cout<<"Enter the number:";
			cin>>a;
			t=0;
			i=0;
while(a>0)
			{
				y=a%16;
				if(y<10)
				{
					t=t+pow(10,i)*y;
				}
				else
				{
					switch(y)
					{
						case 10:
							t=t+pow(10,i)*'A';
							break;
						case 11:
							t=t+pow(10,i)*'B';
							break;
						case 12:
							t=t+pow(10,i)*'C';
							break;
						case 13:
							t=t+pow(10,i)*'D';
							break;
						case 14:
							t=t+pow(10,i)*'E';
							break;
						case 15:
							t=t+pow(10,i)*'F';
							break;
					}
				}
				i++;
				a=a/16;
			}
			cout<<"Hexadecimal="<<t;
			break;
		case'K':
			cout<<"Enter the number:";
			cin>>a;
			t=0;
			i=0;
			while(a>0)
			{
				y=a%8;
				t=t+pow(10,i)*y;
				a=a/8;
				i++;
			}
			cout<<"Octal="<<t;
			break;
		case'L':
			cout<<"Enter the number:";
			cin>>a;
			t=0;
			i=0;
			while(a>0)
			{
				y=a%10;
				t=t+pow(2,i)*y;
				a=a/10;
				i++;
			}
			cout<<"Decimal="<<t;
			break;
		case'M':
			cout<<"Enter the number:";
			cin>>a;
			t=0;
			i=0;
			while(a>0)
			{
				y=a%10;
				t=t+pow(8,i)*y;
				a=a/10;
				i++;
			}
			cout<<"Decimal="<<t;
			break;
		case'N':
			cout<<"Enter the number:";
			cin>>a;
			t=0;
			i=0;
			while(a>0)
			{
				y=a%10;
				t=t+pow(16,i)*y;
				a=a/10;
				i++;
			}
			cout<<"Decimal="<<t;
			break;
		case'O':
			cout<<"Enter the number:";
			cin>>a;
			t=0;
			i=0;
			while(a>0)
			{
				y=a%10;
				t=t+pow(10,i)*y;
				a=a/10;
				i++;
			}
			cout<<"Binary="<<t;
			break;
		case'P':
			cout<<"Enter the number:";
			cin>>a;
			t=0;
			i=0;
			while(a>0)
			{
				y=a%10;
				t=t+pow(10,i)*y;
				a=a/10;
				i++;
			}
			cout<<"Octal="<<t;
			break;
		case'Q':
			cout<<"Enter the number:";
			cin>>a;
			t=0;
			i=0;
			while(a>0)
			{
				y=a%10;
				t=t+pow(10,i)*y;
				a=a/10;
				i++;
			}
			cout<<"Hexadecimal="<<t;
			break;
		case'R':
			cout<<"Enter the number:";
			cin>>a;
			t=0;
			i=0;
			while(a>0)
			{
				y=a%10;
				if(y>=0&&y<=9)
				{
					t=t+pow(10,i)*y;
				}
				else
				{
					switch(y)
					{
						case 'A':
							t=t+pow(10,i)*10;
							break;
						case 'B':
							t=t+pow(10,i)*11;
							break;
						case 'C':
							t=t+pow(10,i)*12;
							break;
						case 'D':
							t=t+pow(10,i)*13;
							break;
						case 'E':
							t=t+pow(10,i)*14;
							break;
						case 'F':
							t=t+pow(10,i)*15;
							break;
					}
				}
				i++;
				a=a/10;
			}
			cout<<"Decimal="<<t;
			break;
		}
	}while(ch!=21);
	return 0;
}
