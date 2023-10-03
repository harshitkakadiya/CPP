#include<iostream>
using namespace std;
template <class T>
void display(T t1)
{
    cout<<"Displaying Template:"<<t1<<endl;
}
template<class x,class y>
void Display (x a,y b)
{
    cout<<"Displaying Template:"<<a<<"\t"<<endl;
}
template<class x,class y>
void Addition (x a,y b)
{
    cout<<"Displaying Template:"<<a+b<<"\t"<<endl;
}
int main()
{
    display(200);
    display(12.56);
    display("G");
    display("Hello");
    Display('G',1.25);
    Display('X',25);
    Display(25,1.25);
    Addition(5,25.5);
    Addition('A',25.5);
}
