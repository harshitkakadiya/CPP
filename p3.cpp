#include<iostream>
using namespace std;

int main()
{
  int i,j,sp=25;
  
	
	 i=1;
	 
	    while(i<=5){ 
	j=1;
	           while(j<=sp){  

				  cout<<"  ";
				  j++;
	      	      }
			
	j=1;
		      while(j<=i){


				cout<<"* ";
				j++;
	      	    }

		  sp--;
	 	  cout<<"\n";
	  	  i++;	
	      }
	
}