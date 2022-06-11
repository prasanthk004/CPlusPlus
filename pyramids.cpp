#include<iostream>
#include<iomanip.h>

using namespace std ;

class star 
{

protected :

int i,j,n ;

public :

void printstar()

{

	cout<<endl<<" Please Enter no.of Lines :  "<<endl ;
	cin>>n ;
	
	for(i=1 ;i<=n ; i++)
	{
	
		for(j=1; j<=n-i ; j++)
		
		{
		
		  cout<<" ";
		  
		}
		
		for(j=1 ; j<=i ; j++)
		{
		
			cout<<"*" ;
        }
		
	 cout<<endl;
	}
	
		
} 

void reversestar()

{

	cout<<endl<<" Please Enter no.of Lines :  "<<endl ;
	cin>>n ;
	
	for(i=1 ;i<=n ; i++)
	{
	
		for(j=1; j<=n-i ; j++)
		
		{
		
		  cout<<"*";
		  
		}
		
		for(j=1 ; j<=i ; j++)
		{
		
			cout<<" " ;
        }
		
	 cout<<endl;
	}
	
}

}; 


class pyramid : public star 

{

private : 

int i , j , n ;

public :
	

void PrintPyramid()
{
 
    cout<<endl<<" Please Enter no.of Lines :  "<<endl ;
	cin>>n ;
 for(i=1;i<=n;i++)
 {
 
  	for(j=1; j<=n-i ; j++)	  	  
	{	 	 
	  cout<<" ";
	 }
 
  	for(j=1;j<=2*i-1 ; j++)
  	{
  		cout<<"*";
  	}
  
  cout<<endl ;	 
 }  
}
};

class numpyramid 
int main()

{

pyramid a ;

a.printstar() ;
a.reversestar();
a.PrintPyramid();

}

						

