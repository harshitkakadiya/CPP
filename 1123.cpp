#include<iostream>
using namespace std;

int main()
{
  int n1=0,n2=1,n3,i,number;
	cout<<"enter the elements : ";
	cin>>number;

	cout<<n1,n2;
	i=2;

	while(i<=number){
	  n3=n1+n2;
	  cout<<n3;
	  n1=n2;
	  n2=n3;
	  ++i;	
	}

	
	
}
