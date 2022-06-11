#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std ;

class primefinder 

{

	private : 
	 int i , j ;
	 
	 public :
	 
	 void sprime( )
	 
	 {
	 
	 
	 int n  ; 
	 cout<<"\n Enter a Number >1 : " ;
	 cin>>n ;
	 
	 
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
	
	if(primeflag==1)
	{
	
		cout<<"\n Given number is prime number ";
	}
	else	
	{	 
	 cout<<"\n Given number is not a prime number " ;
	}
		
	} 		
	
	
	 void nprime()
	 
	 {
	 
	  int n ;
	  int primeflag ;
	  int prime=0 , nprime=0 ;
	  
	  cout<<"\n Enter a Number  : " ;
	  cin>>n ;
	  cout<<endl<<endl;
	  
	  cout<<"----------------------------"<<endl;
	  cout<<setw(7)<<left<<"S.NO  "<<setw(5)<<left<<"Prime  "<<setw(8)<<"Prime or not "<<endl;
	 cout<<"----------------------------";
	 
	 for(i=1 ; i<=n ; i++)
	 {
	 
	 
	 primeflag=1;
	 	  	   
	 for(j=2 ; j<=sqrt(i) ; j++)	 
	 {  
	  	if(i%j==0)
		{	 	 
			primeflag=0 ;
			break;
		}
		
	}
	
	
	if(primeflag==0)
	{
	
		cout<<endl<<setw(7)<<left<< i<<left<<setw(8)<<i<<setw(10)<<"Not Prime ";
		nprime++ ;
	}
	else	
	{	 
	
		cout<<endl<<setw(7)<<left<< i<<left<<setw(8)<<i<<setw(10)<<"Prime ";
		prime++;
	}
		
	} 
	 cout<<endl<<"----------------------------"<<endl;
	cout<<endl<<" \n Prime numbers count within "<<n<<" numbers     : " <<prime;
	cout<<" \n Non-Prime numbers count within "<<n<<" numbers : " <<nprime;	  
	prime=0 ; nprime=0 ;	
    }
	
	 void rprime()
	 
	 {
	 
	  int n=0,m=0 ;
	  int primeflag ;
	  int prime=0, nprime=0;
	  
	  cout<<"\n Enter from Number  : " ;
	  cin>>m ;
	  
	  cout<<"\n Enter TO Number    : ";
	  cin>>n;
	  cout<<endl<<endl;
	  
	  cout<<"----------------------------"<<endl;
	  cout<<setw(7)<<left<<"S.NO  "<<setw(5)<<left<<"Prime  "<<setw(8)<<"Prime or not "<<endl;
	  cout<<"----------------------------";
	 
	 for(i=m ; i<=n ; i++)
	 {
	 
	 
	 primeflag=1;
	 	  	   
	 for(j=2 ; j<=sqrt(i) ; j++)	 
	 {  
	  	if(i%j==0)
		{	 	 
			primeflag=0 ;
			break;
		}
		
	}
	
	
	if(primeflag==0)
	{
	
		cout<<endl<<setw(7)<<left<< i<<left<<setw(8)<<i<<setw(10)<<"Not Prime ";
		nprime++ ;
	}
	else	
	{	 
	
		cout<<endl<<setw(7)<<left<< i<<left<<setw(8)<<i<<setw(10)<<"Prime ";
		prime++;
	}
		
	} 
	 cout<<endl<<"----------------------------"<<endl;
	cout<<endl<<" \n Prime numbers count between "<<m<< " & "<<n<<" numbers     : " <<prime;
	cout<<" \n Non-Prime numbers count between "<<m<< " & "<<n<<" numbers : " <<nprime;	     
	prime=0 ; nprime=0 ;	


    }	    	  
};




int main()

{

primefinder a ;
int n ;
char c ;
do
{
system("cls"); 
cout<<" Prime number Finder "<<endl ;
cout<<" ------------------- "<<endl ;

cout<<" 1. To identify given number prime number"<<endl ;
cout<<" 2. Prime Table " <<endl;
cout<<" 3. To find prime number between range " <<endl ;
cout<<" 4. Exit "<<endl<<endl;

cout<<"\n Please select option (1-4) : " ;
cin>>n ;

system("cls");

switch(n)

{

case 1 :a.sprime() ; break ;
case 2 :a.nprime() ; break ;
case 3 :a.rprime() ; break ;
case 4 : return 1 ; break;
default : cout<<endl<<" Invalid option selected"; break ;

}

cout<<"\n\n Do you want to  continue ... (Y/N) ? " ;
cin>>c;

}while(c=='Y'||c=='y');

}






