#include<iostream>
using namespace std;
class base1
{
    public:
    char name[2];
    void setA()
    {
        cout<<"\n Enter Name :";
        cin>>name;
    }
};
class base2 : public base1
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
class derived : public base2
{
    public:
    void getproduct()
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
    obj.getproduct();
}