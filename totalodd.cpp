#include<iostream>
using namespace std;

int main()
{
  int i,n,j=0;
  
	cout<<"enter n value : ";
	cin>>n;	  
	
	i=1;
	do{
	  cout<<"\n"<<i;
	  j=j+i;
	  i+=2;	
	}while(i<=n);

	cout<<"\ntotal : "<<j;
	
}