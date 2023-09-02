#include<iostream>
using namespace std;
class test{
    public:
    int testcode, nocandidate, centerreqd, calcnt ;
    char description[100];
    int calcntr(){
        return centerreqd=(nocandidate/100+1);

    }

    
    test(){
        cout<<"Enter Testcode: ";
        cin>>testcode;
        cout<<"Enter Description: ";
        cin>>description;
        cout<<"Enter NoCandidate: ";
        cin>>nocandidate;
        cout<<"Enter CenterReqd: ";
        cin>>centerreqd;
        calcnt=calcntr();
        
    }
    void schedule(){
        cout<<"testcode: "<<testcode<<endl;
        cout<<"Description: "<<description<<endl;
        cout<<"NoCandidate: "<<nocandidate<<endl;
        cout<<"Calcnt: "<<calcnt<<endl;
        cout<<"CenterReqd: "<<centerreqd<<endl;
    }
};
 int main()
    {
        test t;
        t.schedule() ;
    }