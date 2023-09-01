   #include<iostream>
using namespace std;

int main()
{
	int  price[5],qty[5],amt,disc,discAmt,gst,BillAmt,Product,totaldiscAmt[5],totalgst[5],totalBillAmt[5],i;
	
	for(i=0;i<5;i++)
	{
		cout<<" Price: "<<i;
		cin>>price[i];
	}

	for(i=0;i<5;i++)
	{
		cout<<" qty : "<<i;
		cin>>qty[i];
	}

	cout<<"price\tqty\tamt\tdisc\tdiscAmt\tgst\tBillAmt";
	for(i=0;i<5;i++)
	{
	 amt=price[i]*qty[i];
	 disc=amt*0.10;
	 discAmt=amt-disc;
	 gst=discAmt*0.18;
	 BillAmt=discAmt+gst;
	 
	cout<<price[i],qty[i],amt,disc,discAmt,gst,BillAmt;
	
        }
	
}