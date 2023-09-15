#include<iostream>
using namespace std;
class result
{
    int maths,english,science,total,per;
    public:
    void setData()
    {
        cout<<"Maths :";
        cin>>maths;
        cout<<"English :";
        cin>>english;
        cout<<"Science :";
        cin>>science;
    }
    void getData()
    {
        total=maths+english+science;
        cout<<"Total :"<<total<<endl;
        per=total/3;
        cout<<"Per :"<<per<<endl;  
    }
};
int main()
{
    result R[5];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"Student No :"<<i+1<<endl;
        R[i].setData();
    }
    for(i=0;i<2;i++)
    {
        cout<<"Student No :"<<i+1<<endl;
        R[i].getData();
    }
}