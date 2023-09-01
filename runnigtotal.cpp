#include<iostream>
using namespace std;

int i;

int display(int a[])
{
	for(i=0; i<5; i++)
	{
		if(i==0)      
		{
			cout<<"\n ",a[i];
		}
		else
		{
			cout<<"\n "<<a[i],a[i]+a[i-1];    
		}
	}
}
int main()
{
	int a[5];
	
	for(i=0; i<5; i++)
	{
		cout<<"enter = ";
		cin>>a[i];
	}
	display(a);
}