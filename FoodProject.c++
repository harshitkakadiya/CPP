#include<iostream>
using namespace std;
class Food {
    public:
    string name;
    int number,qty[10],bill=0,grossbill=0,disc,amount[10];
    float sgst,cgst,GST,netbill=0;
    string items[10];

    void menu(){      
            
            cout<<" "<<endl;
            cout<<"<======================Hk Fast Food======================>"<<endl;

            /*  cout<<"Enter Your Name :"<<endl;
            cin>>name;
            cout<<"Enter Your Num  ber :"<<endl;
            cin>>number; */

            cout<<"\n~~~~~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"\n 1.Pav Bhaji"<<"\t\t\tRs.140/-";
            cout<<"\n 2.Jain Pav Bhaji"<<"\t\tRS.155/-";
            cout<<"\n 3.Kadi Pav Bhaji"<<"\t\tRs.170/-";
            cout<<"\n 4.Cheese Pav Bhaji"<<"\t\tRs.200/-";
            cout<<"\n 5.Panner Pav Bhaji"<<"\t\tRs.220/-";
            cout<<"\n 6.Special Pav Bhaji"<<"\t\tRs.280/-";
            cout<<"\n 7.Extra Pav "<<"\t\t\tRs.60/-";
            cout<<"\n 0.Confirm Your Order \n\n";
    }
        void customer()
    {
        cout<<"Enter Your Name :";
        cin>>name;
        cout<<"Enter Your Number :";
        cin>>number;
    }

        int item1()
    {
        cout<<"~~>Enter Quantity :";
        cin>>qty[1];
        items[1]="\tPav Bhaji         Rs.140/-";
        amount[1]=qty[1]*140;
        return bill=bill+qty[1]*140;
    }
    int item2()
    {
        cout<<"~~>Enter Quantity :";
        cin>>qty[1];
        items[1]="\tJain Pav Bhaji                      Rs.155/-";
        amount[1]=qty[1]*155;
        return bill=bill+qty[1]*155;
    }
    int item3()
    {
        cout<<"~~>Enter Quantity :";
        cin>>qty[2];
        items[2]="\tKadi Pav Bhaji                   Rs.170/-";
        amount[2]=qty[2]*170;
        return bill=bill+qty[2]*170;
    }  
    int item4()
    {
        cout<<"~~>Enter Quantity :";
        cin>>qty[3];
        items[3]="\tCheese Pav Bhaji                       Rs.200/-";
        amount[3]=qty[3]*200;
        return bill=bill+qty[3]*200;
    }
    int item5()
    {
        cout<<"~~>Enter Quantity :";
        cin>>qty[4];
        items[4]="\tPanner Pav Bhaji                  Rs.220/-";
        amount[4]=qty[4]*220;
        return bill=bill+qty[4]*220;
    }    
    int item6()
    {
        cout<<"~~>Enter Quantity :";
        cin>>qty[5];
        items[5]="\tSpecial Pav Bhaji   Rs.280/-";
        amount[5]=qty[5]*280;
        return bill=bill+qty[5]*280;
    }
    int item7()
    {
        cout<<"~~>Enter Quantity :";
        cin>>qty[6];
        items[6]="\tExtra Pav                  Rs.60/-";
        amount[6]=qty[6]*60;
        return bill=bill+qty[6]*60;
    }


    int Gross()
    {
        return grossbill=grossbill + bill;
    }
    int DISCOUNT()
    {
        if(grossbill>1000)
        {
            return disc=(grossbill*5)/100;
        }
    }
    int CGST()
    {
        return cgst=(grossbill*1.50)/100;
    }
    int SGST()
    {
        return sgst=(grossbill*1.50)/100;
    }
    int displaygst()
    {
        return GST=cgst + sgst ;
    }
    int Netbill()
    {
        return netbill = grossbill - disc - GST;
    }
    void displayshow()
    {
        int i;
        for(i=0;i<10;i++)
        {
            if(!items[i].empty())
            {
                cout<<i+1<<"  : "<<items[i]<<"\t"<<qty[i]<<"\t\t"<<amount[i]<<"/-"<<endl;
            }
        }
    }
    void display()
    {
        cout<<"\n<======================HOTEL PARADISE======================>";
        cout<<"\nCustomer Name                  :"<<name<<endl;
        cout<<"\nCustomer Mobile Number         :"<<number<<endl;
        cout<<"\n~~~~~~~~~~~~~~~~~~~~OREDER LIST~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"\nNO\tITEMS\t\t\t\tRATE\t\tQUANTITY\tAMOUNT"<<endl;
    }
};
int main (){
    Food x;
    int a;
    x.menu();
    x.customer();

    do{
        cout<<"\nEnter Your Choice :";
        cin>>a;
        switch(a)
        {
            case 1:
                x.item1();
                break;
            case 2:
                x.item2();
                break;
            case 3:
                x.item3();
                break;
            case 4:
                x.item4();
                break;
            case 5:
                x.item5();
                break;
            case 6:
                x.item6();
                break;
            case 7:
                x.item7();
                break;
            case 0:
                cout<<"order is confirmed.\n";
                break;
            default:
                cout<<"Sorry ! You choose something wrong. Please try again.\n";
                break;
        }
}
while(a != 0);
    x.display();
    x.displayshow();
    cout<<"\n==============================================================================="<<endl;
    cout<<"\t\t\t\t\t\t\t    Gross Bill :"<<x.Gross()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t    Discount   :"<<x.DISCOUNT()<<"/-"<<endl;
    cout<<"\n\t\t\t\t\t\tCGST       :"<<x.CGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\tSGST       :"<<x.SGST()<<"/-"<<endl;
    cout<<"\t\t\t\t\t\t\t    GST        :"<<x.displaygst()<<"/-"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t    Net Bill   :"<<x.Netbill()<<"/-"<<endl;
    cout<<"================================================================================"<<endl;
    cout<<"\n\t\t\t=*=*=*THANK YOU FOR VISIT :)=*=*=*";
} 
