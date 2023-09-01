#include<iostream>
using namespace std;

int main()
{
  int i,j,sp=25;
  
	
	 i=1;
	 
	    while(i<=5){ 
	j=1;
	           while(j<=sp){  

				  cout<<" ";
				  j++;
	      	      }
			
	j=1;
		      while(j<=5){


		if(j==1||i==5||j==i)
		cout<<"* ";

	    else
	    cout<<"  ";


				j++;
	      	    }

		  sp--;
	 	  cout<<"\n";
	  	  i++;	
	      }
	
}