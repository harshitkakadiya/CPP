// friend function
// Argument us abject and return object

#include<iostream>
using namespace std;
class Test{
    int a,b;
    friend Test sum (Test,Test);
    public :
    void Setdata(int x, int y){
        a=x,b=y;
    }
    int getProduct (){
        return a*b;
    }
    };
Test sum(Test x,Test y){
    Test t;
    t.a =x.a + y.a;
    t.a =x.b + y.b;
    return t;
}
int main(){
    Test t,x,z;
    t.Setdata(11,2);
    cout<<"Product Is: "<<t.getProduct()<<endl;
    x.Setdata(20,6);
    cout<<"Product Is: "<<x.getProduct()<<endl;
    z=sum(t,x);
    cout<<"Product Is: "<<z.getProduct()<<endl;
}