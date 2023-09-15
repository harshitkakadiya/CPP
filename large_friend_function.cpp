#include<iostream>
using namespace std;
class larg{
    friend larg add(larg,larg,larg);
    public:
    int a,b;
    void setData()
    {
        cout<<"Enter Number: ";
        cin>>a>>b;
    }
    friend larg find(larg l);
};
void getdata(larg l)
{
    if(l.a>l.b)
    {
        cout<<"Number is Large:"<<l.a;
    }
    else
    {
        cout<<"Number is Large:"<<l.b;
    }
}
int main()
{
    larg l;
    l.setData();
    getdata(l);
}