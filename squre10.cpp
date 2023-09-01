#include<iostream>
using namespace std;

int main()
{
  int i,j,a=10;
  
	
	 i=1;
	 
	    do{ 
	j=1;
	           do{  
				  a=1+a;
		if(j<=5){
				  cout<<" "<<a;
				}
				  j++;
	      	      }while(j<=10);

		  
	 	  cout<<"\n";
	  	  i++;	
	      }while(i<=5);
	
}