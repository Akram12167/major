#include<iostream>
#include<fstream>
using namespace std;
void PrintPartition(int p[], int m);
void UniquePartition(int m);
int main() 
{
   int num;
   cout<<" Enter a Number You Want to get Partition of :";
   cin>>num;
   cout<<endl;
   cout<<" Number of Paritions of "<<num<<" \n"<<endl;
   cout<<" \nYou Can Also Check Your data.txt File \n"<<endl;
   UniquePartition(num);
   
   
   return 0;
}

void PrintPartition(int p[], int m) 
{
	ofstream rdr;
   rdr.open("data.txt",ios_base::app);
   rdr<<endl;
   for (int i = 0; i < m; i++)
   {
      cout << p[i] << " ";
      rdr<<" "<< p[i];
   }
   cout << endl;
}
void UniquePartition(int m) 
{
   int p[m];
   int k = 0;
   p[k] = m;
   while (true) 
   {
      PrintPartition(p, k + 1);
      int rem_val = 0;
      while (k >= 0 && p[k] == 1) 
	  {
         rem_val += p[k];
         k--;
      }
      if (k < 0)
         return;
         p[k]--;
         rem_val++;
      while (rem_val > p[k]) 
	  {
         p[k + 1] = p[k];
         rem_val = rem_val - p[k];
         k++;
      }
      p[k + 1] = rem_val;
      k++;
   }
}
