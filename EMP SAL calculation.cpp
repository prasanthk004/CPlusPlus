#include<iostream>
#include<iomanip>

using namespace std ;

class EMPLOYEE 

	{
		private : 
		
			long salary ;
			string e_code ;
			int age ;
			
		public:
			
			int days ;	  
			string name ;
			float da ;
		 	float Net_sal ;
			float pf ;
			int level ;	   	   	   
			char grade ;
			int csat , ac ;  	 	 	 
						
			void getInputs()
			{
			
				cout<<"\n Enter Name of Employee     : ";
			 	getline(cin,name);
				
				cout<<"\n Enter Emp Code of Employee : ";
				getline(cin,e_code);
				
				do{
				
				cout<<"\n Enter Working days <31 : ";
				cin>>days ;
				}while(days>31);
				
				cout<<"\n Enter Emp Level(L1/L2/L3) : " ;
			 	cin>>level;
				
				cout<<"\n Enter CSAT Count : " ;
				cin>>csat ;
				 
				cout<<"\n Enter Appericiation count : ";
				cin>>ac ;
				 
			 }
			 
			 void Calculations()
			 {
			 
			 	switch(level) 
				
				{
				
					case 1 : salary=days*300 ; break ;	  
					case 2:  salary=days*500 ; break ;
					case 3 : salary=days*700 ; break ;
					default: cout<<endl<<"Invalid option selected" ; break ;
				}
				
				
				if(days>25 || csat>30 || ac>15)
					
					{
					  grade='A' ;
					  da=salary*30/100 ;
					 } 	   	   	    
			   	   	 	 	 
				
				
				else if(days<20 || csat<15 || ac<10)
					
					{
					  grade='B' ;
					  da=salary*15/100 ;
					 } 
				
				
				else if(days<15 || csat<5 || ac<5)
					
					{
					  grade='C' ;
					  da=salary*10/100 ;
					 } 
					 
				else
				
					{
					
						grade='D';
						da=salary*5/100 ;
						
					}
					
					Net_sal=da+salary-pf;  
				}
				
				void display()
				{
					
					cout<<endl<<" Name        : "<<name ;
					cout<<endl<<" Emp Code    : "<<e_code ;
					cout<<endl<<" Level       : "<<level ;
					cout<<endl<<" Days        : "<<days ;
					cout<<endl<<" Grade       : "<<grade ;
					cout<<endl<<" Salary      : "<<salary ;
					cout<<endl<<" Allowance   : "<<da ;
					cout<<endl<<" Net_Salary  : "<<Net_sal ;
				}	 
				
};

int main()

{

	int n,i ;
	
	cout<<"\n Enter Employee counts  : " ;
	cin>>n ;
	fflush(stdin);
	EMPLOYEE emp[10];
	
	EMPLOYEE *e=NULL ;
	
	e=new EMPLOYEE[n];

	 
	
	for(i=0;i<n;i++) //for getting inputs and calculations 
	{
		
	cout<<endl<<"Please enter details of Employee NO : "<<i+1<<endl;
		fflush(stdin);
		e->getInputs();	   
		e->Calculations();
		
		system("cls");
		cout<<endl;
		system("pause");
		cout<<endl;
		e->display();
			
		e++ ; 	  
	 
				   
	}	
	
 
		
 

	/*for(i=0;i<n;i++)
	{
		
			cout<<endl<<"\n ADDRESS OF e  current "<<e ;
		
	cout<<endl<<" Details of Employee NO : "<<i+1<<endl;
		
		e->display();
	 	e++ ;
		
		
	}	*/
	
 
	
 
}	 
								
					
							 
				
			
									
			

