#include<iostream>
using namespace std;
class a{
    public: 
    int n,i=1,j=0;
    void setA(){
        cout<<"entre n number : ";
        cin>>n;

    do{
	  cout<<"\t"<<j;
	  j=i*i;
	  i++;	
	}while(i<=n);
 }
};
class derived: public a 
{
    public:
    void getA(){
        cout<<"\t"<<j<<endl;
    }
};
int main(){
    derived d;
    d.setA();
    d.getA();
}