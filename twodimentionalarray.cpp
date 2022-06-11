#include<iostream>
using namespace std ;



int main()

{
    int i , j ;
	int emp[3][2] ;
	int rtotal[2];
	int ctotal[3] ;	
	
	for(i=0 ; i<3 ; i++)
	{
	 	system("cls");
	 	for(j=0 ; j<2 ; j++ ) 
		
			{
			  
			  	 if(j==0)
				{	
					cout<<"\n Enter Salary of EMP "<< i+1<<": " ;
					cin>>emp[i][j] ;
					
				}
				if(j==1)
				{
				
				   cout<<"\n Enter Bonous of EMP " << i+1<<": "  ;
				   cin>>emp[i][j];
				 }
			 }	   
	}
	
	   
	  

  cout<<"\n Salary Details of employees "; 
  cout<<endl  ;
  	    
 for(i=0; i<3 ; i++)
 
 {
 
 rtotal[i]=0;
 cout<<endl;
 for(j=0;j<2;j++) 
 {
 rtotal[i]+=emp[i][j] ;
 ctotal[i]+=emp[j][i] ;
 cout<<" "<<emp[i][j] ;
 
 }
 cout<<"  "<<rtotal[i];
 
 
} 
}

