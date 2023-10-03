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
            cout<<"<======================RANGILA RESTORENT======================>"<<endl;

            /*  cout<<"Enter Your Name :"<<endl;
            cin>>name;
            cout<<"Enter Your Num  ber :"<<endl;
            cin>>number; */

       
           
           cout<<"\n~~~~~~~~~~~~~~~~~~~~STARTER~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"\n 1.chilly chicken"<<"\t\tRs.264/-";
            cout<<"\n 2.chicken 65"<<"\t\t\tRs.264/-";
            cout<<"\n 3.paneer 65"<<"\t\t\tRs.196/-";
            cout<<"\n 4.veg.manchuriyan"<<"\t\tRs.189/-";
            

           cout<<"\n~~~~~~~~~~~~~~~~~~~~BIRYANIS~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"\n 5.chicken biryani"<<"\t\tRs.210/-";
            cout<<"\n 6.mutton biryani"<<"\t\tRS.253/-";
            cout<<"\n 7.chicken family pack"<<"\t\tRs.552/-";
            cout<<"\n 8.mutton family pack"<<"\t\tRs.576/-";
            cout<<"\n 9.veg.biryani"<<"\t\t\tRs.154/-";
            cout<<"\n 10.veg.suprime pack"<<"\t\tRs.574/-";

           cout<<"\n~~~~~~~~~~~~~~~~~~~~KABABS(NON-VAGE)~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"\n 11.chicken tikka kabab"<<"\t\tRs.243/-";
            cout<<"\n 12.chiken reshmi kabab"<<"\t\tRs.264/-";

           cout<<"\n~~~~~~~~~~~~~~~~~~~~CURRIS~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"\n 13.butter chicken boneless"<<"\tRs.266/-";
            cout<<"\n 14.veg.nijami handi"<<"\t\tRs.171/-";

            
           cout<<"\n~~~~~~~~~~~~~~~~~~~~INDIAN BREADS~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"\n 15.tandoori roti"<<"\t\tRs.40/-";
            cout<<"\n 16.rumali roti "<<"\t\tRs.40/-";
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
        cout<<"====>Enter Quantity :";
        cin>>qty[1];
        items[1]="\tchilly chicken        Rs.264/-";
        amount[1]=qty[1]*140;
        return bill=bill+qty[1]*140;
    }
    int item2()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[1];
        items[1]="\tchicken 65            Rs.264/-";
        amount[1]=qty[1]*155;
        return bill=bill+qty[1]*155;
    }
    int item3()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[2];
        items[2]="\tpaneer 65                   Rs.196/-";
        amount[2]=qty[2]*170;
        return bill=bill+qty[2]*170;
    }  
    int item4()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[3];
        items[3]="\tveg.manchuriyan                      Rs.189/-";
        amount[3]=qty[3]*200;
        return bill=bill+qty[3]*200;
    }
    int item5()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[4];
        items[4]="\tPanner Pav Bhaji                  Rs.220/-";
        amount[4]=qty[4]*220;
        return bill=bill+qty[4]*220;
    }    
    int item6()
    {
        cout<<"====>Enter Quantity :";
        cin>>qty[5];
        items[5]="\tSpecial Pav Bhaji   Rs.280/-";
        amount[5]=qty[5]*280;
        return bill=bill+qty[5]*280;
    }
    int item7()
    {
        cout<<"====>Enter Quantity :";
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
