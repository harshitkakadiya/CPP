#include <iostream>
using namespace std;
class Test
{
    public:
    void Volume(int l)
   {
      cout<<" Volume of Cube : "<<l*l*l<<endl; //Cube
   }
    void Volume (int l,int w,int h)
   {
      cout<<" Volume of Cuboid : "<<l*w*h<<endl; //Cuboid
   }
    void Volume(double r)
   {
      cout<<" Volume of Sphere : "<<((4/3)*3.14*r*r*r)<<endl; //Sphere
   }
    void Volume(int b,double h)
   {
     cout<<" Volume of Prism : "<<(b*b)*h<<endl; //Prism
   }
    void Volume(double b, double h)
   {
   cout<<" Volume of Pyramid : "<<0.33*b*h<<endl; //Pyramid
   }

    void Volume(double r,int h)
   {
   cout<<" Volume of Cylinder : "<<3.14*r*r*h<<endl; //Cylinder
   }
};
int main()
{
    Test t;
    t.Volume(2);
    t.Volume(2,5,6);
    t.Volume(3.5);
    t.Volume(2,3.5);
    t.Volume(3.3,4.5);
    t.Volume(3.3,5);
}
