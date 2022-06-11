#include<iostream>

using namespace std ;

class simpleInterest //Creating Class 

{

private : //private members(Protected)
	float P,N,R ;
	
public : //public members(Non-Protected)

	float si ;

 	void ReadInput()
	{	
		cout<<"\n Enter Principle Amount  : ";
		cin>>P;
		cout<<"\n Enter Rate of  Interest : ";
		cin>>R ;
		cout<<"\n Enter Number of Year    : ";
		cin>>N;
		
	}
	
	float Calculate()
	{
	 si=P*N*R/100;
	}
	float getSimpleInterest()
	{
		return P*N*R/100 ;
	} 
	
	float principle()
	{
		return P ;
	}
	
	float RateofInterest()
	{
		return R ;
	}
    float NumberOfYears()
	{
		return N ;
	}	 	 	 	 
	
};



int main()

{
	simpleInterest simple ;
    simple.ReadInput();
	simple.Calculate();
	
	
	cout<<"\n Your Inputs are ... "<<endl;
	
	cout<<"\n         Principle : "<<simple.principle();    
	cout<<"\n Rate of Interest  : "<<simple. RateofInterest()<<"%";
    cout<<"\n   Number of Year  : "<<simple.NumberOfYears()<<endl;
	cout<<"\n Simple Interest   : "<<simple.si;	   
	
}	 
			   	   	   	   	   

