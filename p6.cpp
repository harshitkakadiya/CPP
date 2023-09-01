#include<iostream>
using namespace std;

int main()
{
  int i,j,sp=25;
  
	
	 i=5;
	 
	    do{ 
	j=1;
	           do{  

				  cout<<"  ";
				  j++;
	      	      }while(j<=sp);
			
	j=i;
		      do{


				cout<<"* ";
				j--;
	      	    }while(j>=1);

		  sp++;
	 	  cout<<"\n";
	  	  i--;	
	      }while(i>=1);
	
}