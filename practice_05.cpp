#include<iostream>
using namespace std;

class book
{
            int bookNo;
            char btitle[20];
            float price;
            float total_cost(int copyNo)
            {
                    float total;
                    total=price*copyNo;
                    return total;
             }
public:
          int input()
               {
                  cout<<"Enter book no: ";
                  cin>>bookNo;
                  cout<<"Enter book title: ";
                  cin>>btitle;
                  cout<<"Enter price of book: ";
                  cin>>price;
            }
          int purchase()
          {
            cout<<"Enter the number of copies ";
            int copyNo;
            cin>>copyNo;
            float total;
            total=total_cost(copyNo);
            cout<<"Total cost:"<<total;
         }
};
int main()
{
    book b;
    b.input();
    b.purchase();
}