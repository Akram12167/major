#include<iostream>
#include<windows.h>
using namespace std;

void hell(){

cout<<"                +================"<<endl;
cout<<"          _ /^^[_              _"<<endl;
cout<<"         /|^+----+   |#_____//"<<endl;
cout<<"       ( -+ |_|   ____-----+/"<<endl;
cout<<"        ==___--'            \\"<<endl;
cout<<"          ~|_|_"<<endl;

}

void hell2(){

cout<<"================+"<<endl;
cout<<"          _ /^^[_              _"<<endl;
cout<<"         /|^+----+   |#_____;\ "<<endl;
cout<<"       ( -+ |_|   ____-----+/"<<endl;
cout<<"        ==___--'            \\"<<endl;
cout<<"          ~|_|_"<<endl;

}

int main(){
int x=10;
bool t=false;
while(true){

system("cls");
for(int i=0;i<x;i++){
cout<<endl;
}

hell();
Sleep(50);
system("cls");
for(int i=0;i<x;i++){
cout<<endl;
}

hell2();
Sleep(50);
if(x==10)
t=false;
if(x==0)
t=true;
if(t){
x++;
}
else
x--;
}
}
