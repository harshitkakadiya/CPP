#include<iostream>
using namespace std;
class Base1{
    public:
    virtual void show(){
        cout<<"Base Class Show Function Called..."<<endl;
    }
};
class Base2{
    public:
    void dis(){
        cout<<"Base Class Show Function Called..."<<endl;
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
    Base1 *p,b;
    Derived d;
    d.dis();
    p=&b;
    p->show();

    p=&d;
    p->show();
}