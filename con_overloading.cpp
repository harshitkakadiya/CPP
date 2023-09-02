// Constructor Overloading
#include<iostream>
using namespace std;
class Test{
    public:
    Test(){
        cout<<"Default Constructor is called"<<endl;
    }
    Test(int a){
        cout<<"Value of a is: "<<a<<endl;
    }
    Test(char a){
        cout<<"Char is: "<<a<<endl;
    }
    Test(int a, int b){
        cout<<"Product of a and b is: "<<a*b<<endl;
    }
    Test(int a, int b, int c){
        cout<<"Addition of a, b and c is: "<<a+b+c<<endl;
    }
};
int main()
{
    Test t(2,6), a('Z');
}

// Solid shape Volume 
// Area