#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;
    public:
    void setA(){
            cout<<"Enter a:";
            cin>>a;
        }
};
class Derived1 : public Base
{
    protected:
    int b;
    public:
    void setB(){
            cout<<"Enter b:";
            cin>>b;
        }
        void product (){
            cout<<"Product of a and b is: "<<a*b<<endl;
        }
};
class Derived2 : public Base
{
    protected:
    int n;
    public:
    void setN(){
        cout<<"Enter n:";
        cin>>n;
    }
    void Add(){
        cout<<"Addition of a and n is: "<<a+n<<endl;
    }
};
int main (){
    Derived1 d1;
    d1.setA();
    d1.setB();
    d1.product();

    Derived2 d2;
    d2.setA();
    d2.setN();
    d2.Add();
}