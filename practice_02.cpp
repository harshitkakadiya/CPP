#include<iostream>
using namespace std;
class batsman{
    int bcode, inning, notout, runs , calculate;
    float batavg;
    char bname[20];
    int calcavg(){
       return batavg=runs/(inning-notout);
    }
    public:
    void readdata (){
        cout<<"Enter bcode: ";
        cin>>bcode;
        cout<<"Enter bname: ";
        cin>>bname;
        cout<<"Enter inning: ";
        cin>>inning;
        cout<<"Enter notout: ";
        cin>>notout;
        cout<<"Enter run: ";
        cin>>runs;
        calculate=calcavg();
    }
    void displaydata(){
        cout<<"Code: "<<bcode<<endl;
        cout<<"Name: "<<bname<<endl;
        cout<<"Inning: "<<inning<<endl;
        cout<<"Not-Out: "<<notout<<endl;
        cout<<"Run: "<<runs<<endl;
        cout<<"Average: "<<calculate<<endl;
    }
};

    int main()
    {
        batsman b;
        b.readdata() ;
        b.displaydata() ;
    }

