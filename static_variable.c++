#include<iostream>
using namespace std;
class Test{
    public:
    static int a;
    Test (){
        cout<<"contruetor is called...."<<endl;
        a++;
    }
    static int val(){
        return a;
    }
};
int Test :: a=5;
int main(){
    cout<<"Starting Value: "<<Test::val()<<endl<<endl;
//  cout<<"Starting Value: "<<Test::a<<endl<<endl;
    Test t,a,m,s;
    cout<<"Ending Value: "<<Test::val()<<endl<<endl;
//  cout<<"Starting Value: "<<Test::a<<endl<<endl;
}