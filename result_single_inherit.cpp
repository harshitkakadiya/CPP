#include<iostream>
using namespace std;
class base{
        protected:
        int maths,english,science,total,per;
        public:
        void setA(){
        cout<<"Maths :";
        cin>>maths;
        cout<<"English :";
        cin>>english;
        cout<<"Science :";
        cin>>science;
        }
    };
    class Derived : public base{
        public:
        void getA(){
        total=maths+english+science;
        cout<<"Total :"<<total<<endl;
        per=total/3;
        cout<<"Per :"<<per<<endl;
        }
    };
    int main()
    {
        Derived d;
        d.setA();
        d.getA();
        
    }
