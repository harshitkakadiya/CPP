#include<iostream>
using namespace std;

int main()
{
	int a=10,b=5,ch;
	cout<<"1.Addition\n";
	cout<<"2.Subtraction\n";
	cout<<"3.Multiplication\n";
	cout<<"4.Division\n";
	cout<<"enter your number : ";
	cin>>ch;

	switch(ch)
	{
		case 1:
		       cout<<"Addition of a and b is :%d\n"<<a+b;
		       break;
		case 2:
		       cout<<"Subtraction of a and b is :%d\n"<<a-b;
		       break;
		case 3:
		       cout<<"Multiplication of a and b is :%d\n"<<a*b;
		       break;
		case 4:
		       cout<<"Division of a and b is :%d\n"<<a/b;
		       break;
		default:
		       cout<<"wrong choise...";
		       break;	
	}
}