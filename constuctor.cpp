#include<iostream>
using namespace std;

class Test
{
    public:
    Test(){
        cout<<"Defualt Constructor Is Called"<<endl;
    }
    Test (int x){
        cout<<"parameterrized Constructor Is Called"<<endl;
        cout<<"Value Of a is "<<x<<endl;
    }
};
int main(){
    Test b(100),a;
}