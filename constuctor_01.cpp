#include<iostream>
using namespace std;

class student
{
    public:
    int adminNo;
    char sname[20];
    float eng, maths, sci, total;
    float ctotal(){
        return maths+sci+eng;
    }
    
    student(){
        cout<<"Enter Admin No: ";
        cin>>adminNo;
        cout<<"Enter Student Name: ";
        cin>>sname;
        cout<<"Enter Maths Marks: ";
        cin>>maths;
        cout<<"Enter Science Marks: ";
        cin>>sci;
        cout<<"Enter English Marks: ";
        cin>>eng;
        total=ctotal();
    }
    void showdata (){
        cout<<"Student Admin No: "<<adminNo<<endl;
        cout<<"Student Name: "<<sname<<endl;
        cout<<"Maths MArks: "<<maths<<endl;
        cout<<"Scince Marks: "<<sci<<endl;
        cout<<"English Marks: "<<eng<<endl;
        cout<<"Total Marks: "<<total<<endl;
    }
};
int main(){
    student s;
    s.showdata();
}