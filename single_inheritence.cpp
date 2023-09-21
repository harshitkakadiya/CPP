#include<iostream>
using namespace std;
class base{
        protected:
        int a;
        public:
        void setA(){
            cout<<"Enter a: ";
            cin>>a;
        }
    };
    class Derived : public base{
        public:
        void getA(){
            cout<<"value of a id: "<<a<<endl;
        }
    };
    int main()
    {
        Derived d;
        d.setA();
        d.getA();
        
    }
