#include <iostream>
using namespace std;
int main()
{
    int i,j,a=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
        a=1+a;
        cout<<a;
        }
        cout<<"\n";
    }
    return 0;
}