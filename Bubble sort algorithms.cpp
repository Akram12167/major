//bubble sort alghorithm
#include<iostream>
using namespace std;
int main (){
	int n;
	cout<<"enter a sarray size : ";
	cin>>n;
	int arr[n];
	 for(int a=0;a<n;a++){
	 	cout<<"enter sarray value :";
	 	cin>>arr[a];
	 }
	 int pass=1;
	while(pass<n){
		for(int i=0;i<n-pass;i++){
		
		if(arr[i]>arr[i+1]){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}}
		pass++;
	}
		 for(int a=0;a<n;a++){
	 	cout<<arr[a]<<" ";
	 }
}
