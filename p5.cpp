#include<iostream>
using namespace std;

int main()
{
  int i,j,sp=25;
  
	
	 i=5;
	 
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