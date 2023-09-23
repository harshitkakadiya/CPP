#include<iostream>
using namespace std;
class Bank {
    int bal;
    string name;
    public:
    void setData(int bal, string name){
        this->name=name;
        this->bal=bal;
    }
    void getData(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Balance is:"<<bal<<endl;
    }
};
int main (){
    Bank b;
    b.setData(1000,"Skill");
    b.getData();
}