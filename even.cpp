#include <iostream>
using namespace std;
int main()
{
    int a,n=0;
    for(a=2;a<=20;a=a+2)
    {
        cout<<a ;
        n=n+a;
    }
    cout<<"Total Even no: "<<n;
    return 0;
}