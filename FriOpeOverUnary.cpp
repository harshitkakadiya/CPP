#include<iostream>
using namespace std;
class Box{
    int l,b,h;
    public:
    void setData (int,int,int);
    int getVolume(){
        return l*b*h;
    }
    friend Box operator++(Box);
    friend Box operator+(Box,Box);
};
void Box :: setData(int x,int y,int z){
    l=x , b=y ,h=z;
}
Box operator++(Box m){
        Box t;
        t.l = ++m.l;
        t.b = ++m.b;
        t.h = ++m.h;
        return t;
    }
Box operator+(Box m,Box n){
        Box t;
        t.l = m.l + n.l;
        t.b = m.b + n.b;
        t.h = m.h + n.h;
        return t;
    }
int main(){
    Box a,b,c,d;
    a.setData(2,2,2);
    cout<<"Volume of Box A is : "<<a.getVolume()<<endl;
    b.setData(5,5,5);
    cout<<"Volume of Box B is : "<<b.getVolume()<<endl;
    
    c=a+b;
    cout<<"Volume of Box C is : "<<c.getVolume()<<endl;

    d=++c;
    cout<<"volume of Box D is : "<<d.getVolume()<<endl;
}