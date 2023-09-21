#include<iostream>
using namespace std;
class Base1
{
    public:
    char name[10];
    void setA()
    {
        cout<<"Enter Name :";
        cin>>name;
    }
};
class Base2
{
    public:
    int maths,english,sci,total,per;
    void setB()
    {
        cout<<"Maths :";
        cin>>maths;
        cout<<"English :";
        cin>>english;
        cout<<"Sci :";
        cin>>sci;
        total=maths+english+sci;
        per=total/3;
    }
};
class derived : public Base1,public Base2{
    public:
    void GetProduct()
    {
        cout<<"Total "<<total<<endl;
        cout<<"Per "<<per<<endl;
    }
};
int main()
{
    derived obj;
    obj.setA();
    obj.setB();
    obj.GetProduct();
}
