#include<iostream>
#include<iomanip>
#include<cmath>

class primefinder 

{

	private : 
	 int i , j ;
	 
	 public :
	 
	 void sprime(int n)
	 
	 {
	 
	 int primeflag ;
	 
	 primeflag=1;
	 	  
	 for(i=2 ; i<=sqrt(n) ; i++)
	 
	 {
	 
	  	if(n%i==0)
		{
		
			primeflag=0 ;
			break;
		}
		
	}
	
	if(primeflag==0)
	{
	
		cout<<"\n Given number is prime number ";
	}
	else
	
	{
	
		cout<<"\n Given number is not a prime number " ;
	}
	
	}	 
					
	 	
};



int main()

{

primefinder a ;

int n ;


cout<<"\n Enter a  Number : " ;
cin>>n ;

a.sprime(n) ;


}




