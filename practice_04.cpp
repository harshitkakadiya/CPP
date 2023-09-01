#include<iostream>
using namespace std;
class flight{
    int flightNo,calculate;
    char destination[50];
    float distance, fuel;
    int calfuel(){
        if (distance <= 1000)
        fuel = 500;
    else if (distance <= 2000)
        fuel = 1100;
    else
        fuel = 2200;
    }

    public:
    void  feedinfo (){
        cout<<"Enter Flight Number: ";
        cin>>flightNo;
        cout<<"Enter Destination: ";
        cin>>destination;
        cout<<"Enter Distance: ";
        cin>>distance;
        calculate=calfuel();
    }
    void  showinfo (){
        cout<<"flightNo: "<<flightNo<<endl;
        cout<<"Destination: "<<destination<<endl;
        cout<<"Distance: "<<distance<<endl;
        cout<<"fuel: "<<fuel<<endl;
    }
};
 int main()
    {
        flight f;
        f.feedinfo() ;
        f.showinfo() ;
    }