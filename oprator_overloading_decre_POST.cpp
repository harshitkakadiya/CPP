#include<iostream>
using namespace std;
class Box{
    int l,b,h;
    public:
    void setData (int,int,int);
    int getVolume(){
        return l*b*h;
    }
    Box operator--(int){
        Box t;
        t.l = l--;
        t.b = b--;   
        t.h = h--;
        return t;
    }
};
void Box :: setData(int x,int y,int z){
    l=x , b=y ,h=z;
}
int main(){
    Box a,n;
    a.setData(5,5,5);
    cout<<"Volume of Box A is : "<<a.getVolume()<<endl;
    a--;
    n=a;
    cout<<"volume of Box N is : "<<n.getVolume()<<endl;
}