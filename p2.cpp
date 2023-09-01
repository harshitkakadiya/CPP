#include<iostream>
using namespace std;

int main()
{
  int i,j,sp=25;
  
	
	 i=1;
	 
	    do{ 
	j=1;
	           do{  

				  cout<<" ";
				  j++;
	      	      }while(j<=sp);
			
	j=1;
		      do{


				cout<<"* ";
				j++;
	      	    }while(j<=i);

		  sp--;
	 	  cout<<"\n";
	  	  i++;	
	      }while(i<=5);
	
}