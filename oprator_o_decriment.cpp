#include<iostream>
using namespace std;
class Box{
    int l,b,h;
    public:
    void setData (int,int,int);
    int getVolume(){
        return l*b*h;
    }
    Box operator-(Box &n){
        Box t;
        t.l = l - n.l;
        t.b = b - n.b;
        t.h = h - n.h;
        return t;
    }
};
void Box :: setData(int x,int y,int z){
    l=x , b=y ,h=z;
}
int main(){
    Box a,b,c;
    a.setData(6,6,6);
    cout<<"Volume of Box A is : "<<a.getVolume()<<endl;
    b.setData(4,4,4);
    cout<<"Volume of Box B is : "<<b.getVolume()<<endl;
    
    c=a-b;
    cout<<"volume of Box C is : "<<c.getVolume()<<endl;
}