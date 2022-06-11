#include <iostream>
#include <conio.h>

using namespace std ;

class SI 

{

	private :
	
	float p,n,r,amt  ;
	
	public :
	
	string name ;
	
	
	void Inputs()
		
	{
		cout<<endl<< " Name     : ";
		getline(cin,name);	  
		cout<<endl<<" Principal : ";
		cin>>p;
		
		cout<<endl<<" No.of Years : ";
		cin>>n;
		
		cout<<endl<<" Interest    : ";
		cin>>r; 
	}
	
	
	void calc()	   
	{	 
		amt=p*n*r/100 ;	   	   
	}
	
	float GetInterestamt()
	{
		return amt ;
	}	 
		
	
	void output()	 
	{ 
		cout<<endl<<" Principal   : "<<p;	 
		
		cout<<endl<<" No.of Years : "<<n;	
		
		cout<<endl<<" Interest    : "<<r;
		
		cout<<endl<<" Interest amount : "<<amt;   	  
	}
	
};



int main()


{

    int i ; float max ;
	
	SI a[5];  
	
	for(i=0 ; i<3 ; i++)
	
	{
		cout<<"\n Enter details of Customer  "<<i+1<<endl;
		a[i].Inputs();
		fflush(stdin);
		a[i].calc();
		cout<<"\n Interest amount of customer "<<i+1<<" : "<<a[i].GetInterestamt()<<endl;
		system("pause");
		
		system("cls");	  	  
	
		
	}
	
	max=a[0].GetInterestamt();
	
	for(i=0;i<3;i++)
	
	{
		if(max<a[i].GetInterestamt())
		
		{
		
			max=a[i].GetInterestamt();
		}	 
	}	 

 	for(i=0;i<3;i++)
	
	{ 
		if(	max==a[i].GetInterestamt())
		{
		  cout<<endl<<endl<<" Customer"<<i<<" Getting highest interest amount ";
		  
		 a[i].output();
		 }
	}	 
	    
}



