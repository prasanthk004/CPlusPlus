#include<iostream>

using namespace std ;

int main()

{

int n[10] ;


int sum=0,i ;

cout <<"\n STUDENT MARK CALCULATOR " ;
cout <<"\n ----------------------- " ;

cout<<"\n Enter Marks one by one\n" ;

for(i=0 ; i<5 ; i++)

	{
	   cout <<"\n Enter mark "<<i+1<<": ";
		cin>>n[i] ; 
		
	}
	
cout<<"\n You entered marks \n" ;	 
for (i=0 ; i<5 ; i++)

	{
	   cout<<"\n Mark  "<<i+1<<": "<<n[i] ;
		sum+=n[i] ;
    }

cout<<"\n\n Total : "<<sum ;	
	
}	 	 	 	 
	

