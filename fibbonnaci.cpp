#include<iostream>
using namespace std;

int fibbonnaci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;    
    else 
        return fibbonnaci(n-1)+fibbonnaci(n-2);
}

int main()
{
    int i,n;
    
    cout<<" enter the number : ";
    cin>> n;
    
    for(i=0; i<n; i++)
    {
        cout<< fibbonnaci(i);
    }
}
