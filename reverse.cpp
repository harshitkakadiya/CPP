#include<iostream>
using namespace std;

int main()
{
	char str[200],str2[200];
	int i,j,a=0;

	cout<<"Enter string: ";
	gets(str);

	cout<<"your string :\n"<<str;

	for(a=0;str[a]!='\0';a++);
		j=a;
	
	
 	for(i=0;i<a;i++)
	{	
	    str2[i]=str[--j];
	}
	str2[i]='\0';

	cout<<"\nReverse string :"<<str2;
}