#include<iostream>

using namespace std ;

class simpleInterest //Creating Class 

{

private : //private members(Protected)
	float P,N,R ;
	
	
public : //public members(Non-Protected)

	float si ;
	char name[30];
	

 	void ReadInput()
	
	
	{	
	    cout<<"\n             Enter  Name : " ;
		cin.getline(name,30);
		cout<<"\n Enter Principle Amount  : ";
		cin>>P;
		cout<<"\n Enter Rate of  Interest : ";
		cin>>R ;
		cout<<"\n Enter Number of Year    : ";
		cin>>N;
	
	    fflush(stdin);
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
	
	
	void PrintResult()
	{
	
	cout<<"\n         Principle : "<<P;    
	cout<<"\n Rate of Interest  : "<<R<<"%";
    cout<<"\n   Number of Year  : "<<N<<endl;
	cout<<"\n Simple Interest   : "<<si;	
	}
};



int main()

{

	simpleInterest a,b,c ;
	simpleInterest h ;
	
	
	//Opertaion For Oblect A//
	
	a.ReadInput();a.Calculate();cout<<"\n Simple interest of "<<a.name<<" is "<<a.si<<endl;
	cout<<"\n PRESS A KEY TO CONTINUE......" ;
	cin.get();
	system("cls");
	
	//operation For Object B //
	b.ReadInput();b.Calculate();cout<<"\n Simple interest of "<<b.name<<" is "<<b.si<<endl;
	cout<<"\n PRESS A KEY TO CONTINUE......" ;
	cin.get();
	system("cls");
	
	//Operation For Object C //
	c.ReadInput();c.Calculate();cout<<"\n Simple interest of "<<c.name<<" is "<<c.si<<endl;
	cout<<"\n PRESS A KEY TO CONTINUE......" ;
	cin.get();
	system("cls");
	
	if(a.si>b.si&&a.si>c.si)
	
	{	 	 
		h=a;
	}	
	else if(b.si>a.si&&b.si>c.si)
	{
		h=b;
	}
	else
	{
		h=c ;
		
	}
   
   cout<<"\n "<<h.name<<" is  Getting highest Interest Amount " ;	 	 	 	 	 
   h.PrintResult();
	
}	 
			   	   	   	   	   

