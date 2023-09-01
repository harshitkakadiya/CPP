#include<iostream>
using namespace std;

class report
{
            int adno,i,total=0;
            char name[20];
            float marks[5],averg;
            float getavg()
            {
                    averg=total/5;
            }
public:
          int READINFO()
               {
                  cout<<"Enter Adnim no: ";
                  cin>>adno;
                  cout<<"Enter Name: ";
                  cin>>name;
                  for(i=0;i<5;i++)
                  {
                    switch(i)
                    {
                        case 0:
                            cout<<"Enter English Marks: ";
                            break;
                        case 1:
                            cout<<"Enter Science Marks: ";
                            break;
                        case 2:
                            cout<<"Enter Maths Marks: ";
                            break;
                        case 3:
                            cout<<"Enter Hindi Marks: ";
                            break;
                        case 4:
                            cout<<"Enter Statistics Marks: ";
                            break;
                        default:
                            cout<<"Enter velid  input: ";
                            break;
                    }
                    cin>>marks[i];
                    total=total+marks[i];
                  }
                  getavg ();
                  DISPLAYINFO();
            }
          void DISPLAYINFO()
          {
            cout<<"Admin No : "<<adno;
            cout<<"Name : "<<name<<endl;
            for (i=0;i<5;i++)
            {
                switch(i)
                {
                    case 0:
                            cout<<endl<<" English : ";
                            break;
                        case 1:
                            cout<<endl<<" Science : ";
                            break;
                        case 2:
                            cout<<endl<<" Maths : ";
                            break;
                        case 3:
                            cout<<endl<<" Hindi : ";
                            break;
                        case 4:
                            cout<<endl<<" Statistics : ";
                            break;
                }
                cout<<marks[i];
            }
            cout<<"Total  Mark Is : "<<total<<endl;
            cout<<"avarg  Mark Is : ["<<averg<<"]"<<endl;
          }
};
int main()
{
    report s;
    s.READINFO();
    s.DISPLAYINFO();
}