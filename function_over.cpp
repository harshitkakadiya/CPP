#include <iostream>
using namespace std;
class test{
    public:
    void Test (int a,int b){
        cout<<"Addition of a and b is: "<<a+b<<endl;
    }
    void Test (double a,double b){
        cout<<"product of a nsd b is : "<<a*b<<endl;
    }
    void Test (int x){
        cout<<"Value of x is: "<<x<<endl;
    }
    void Test (double x){
        cout<<"Square of x is: "<<x*x<<endl;
    }
};
int main (){
    test t;
    t.Test(10.2);
    t.Test(10.2,2.5);
    t.Test(10,2);
}