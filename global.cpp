#include<iostream>
using namespace std;

int m,s,e,t;
int dis()
{

	cout<<"maths is : \n"<<m;
	cout<<"science is : \n"<<s;
	cout<<"english is : \n"<<e;
	cout<<"total is : \n"<<t;

}
int calc()
{
	
	t=m+s+e;
	dis( m,s, e, t);
}
int setData(int m,int s,int e,int t)
{
	

	cout<<"enter m: ";
	cin>>m;
    cout<<"enter s: ";
	cin>>s;
    cout<<"enter e: ";
	cin>>e;
	calc(int m,int s,int e,int t);

}
int main()
{
	setData();

}	