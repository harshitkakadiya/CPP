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
		      while(j<=i){


				cout<<"* ";
				j++;
	      	    }

		  sp--;
	 	  cout<<"\n";
	  	  i++;	
	      }while(i<=5);



 i=6;
	 
	    while(i>=1){ 
	j=1;
	           while(j<=sp){  

				  cout<<" ";
				  j++;
	      	      }
			
	j=i;
		      while(j>=1){


				cout<<"* ";
				j--;
	      	    }

		  sp++;
	 	  cout<<"\n";
	  	  i--;	
	      }
}	
