#include<iostream>
using namespace std;
class Base1{
    public:
    virtual void show() =0 ;
};
class Base2{
    public:
    void dis(){
        cout<<"Base Class 2 Display Function Called..."<<endl;
    }
};
class Derived : public Base1,public Base2{
    public:
    void show(){
        cout<<"Derived Class Show Function Called..."<<endl;
    }
};
int main()
{
    Base1 *p;
    Derived d;
    d.dis();
    p=&d;
    p->show();
}