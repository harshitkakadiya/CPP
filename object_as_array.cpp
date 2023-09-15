#include<iostream>
using namespace std;
class Test{
    int a,b;
    public:
    void setData(){
        cout<<"Enter a: ";
        cin>>a;
        cout<<"Enter b: ";
        cin>>b;
    }
    void getData(){
        cout<<"Product of a and b is: "<<a*b<<endl;
    }
};
int main (){
    Test t[5];
    int i;
    for (i=0; i<2; i++){
        cout<<"Enter Dada of "<<i+1<<endl;
        t[i].setData();
    }
    for (i=0; i<2; i++){
        cout<<"Displaying Dada of "<<i+1<<endl;
        t[i].getData();
    }
}