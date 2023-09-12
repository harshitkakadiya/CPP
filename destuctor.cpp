#include<iostream>
using namespace std;
class Test{
    public:
    Test(){
        cout<<"Defualt Constructor is called"<<endl;
    }
    ~Test(){
        cout<<"Destructor is called"<<endl;
    }
    Test(int x){
        cout<<"Parametarized Constructor is called"<<endl;
        cout<<"Value of a is: "<<x<<endl;
    }
};
int main (){
    Test t(1);
}