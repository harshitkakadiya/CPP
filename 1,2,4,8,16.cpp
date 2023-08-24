#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter N: ";
    cin>>n;
    for(i=1;i<n;i*=2)
    {
        cout<<i;
    }
    cout<<i;
    return 0;
}