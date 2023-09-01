#include<iostream>
using namespace std;

int main()
{
	int a[5][5];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter 1 val: ";
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  if(a[i][j]==0)
			cout<<"  ";
		  else
			cout<<" "<<a[i][j];
		}
	cout<<"\n";
	}
	

}