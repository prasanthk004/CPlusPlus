#include<iostream>
#include<iomanip>
using namespace std ;

class calc

{

	private : 
	
		int result ;
		
	public  :
	
		int a , b;
		
	void add()
	
		{
			cout<<"\n Enter Value of A : ";
			cin>>a ;
			cout<<"\n Enter Value of B : ";
			cin>>b ;
			
				
			result = a+ b ;	   	   	   
			cout<<endl<<endl<<"RESULT : "<<result ;
		}
		
	void sub()
	
		{
		
			cout<<"\n Enter Value of A : ";
			cin>>a ;
			cout<<"\n Enter Value of B : ";
			cin>>b ;
			
		
			result = a-b ;
			cout<<endl<<endl<<"RESULT : "<<result ;
			
		}
		
	void mul()
		
		{
			cout<<"\n Enter Value of A : ";
			cin>>a ;
			cout<<"\n Enter Value of B : ";
			cin>>b ;
			
		
			result=a*b ;
			cout<<endl<<endl<<"RESULT : "<<result ;
			
		}
		
	void div()
	
		{
			cout<<"\n Enter Value of A : ";
			cin>>a ;
			cout<<"\n Enter Value of B : ";
			cin>>b ;
			
			result=a/b;
			cout<<endl<<endl<<"RESULT : "<<result ;
		}
		
		
};


int main()

{


	calc a ;
	int opt ;
		
	cout<<"                        SIMPLE CALCULATOR   " ;
	
	cout<<"\n 1. ADDITION  " ;
	cout<<"\n 2. SUBTRACTION ";
	cout<<"\n 3. MULTIPLICATION " ;
	cout<<"\n 4. DIVISION " ;
	
	cout<<endl<<endl<<" Please select option(1-4) : " ;
	cin>>opt ;
		
	
	switch(opt)
	
	{
	
		case 1 : a.add() ; break ;
		case 2 : a.sub() ; break ;
		case 3 : a.mul() ; break ;
		case 4 : a.div() ; break ;
		default : cout<<"\n INVALID OPTION SELECTED "<<endl<<endl; system("PAUSE");
		
	
	}	 
			
	
	 
}





								
			
			         	 

