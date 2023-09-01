#include<iostream>
using namespace std;

int main()
{
   int i;
	i=0;
	while(i<=24){
	  if(i%4==0)
 	  {
		cout<<(char)(i+65);
	  }
	else{
	  cout<<(char)(i+97);
	}	
	 	  i+=2;	
	}
}