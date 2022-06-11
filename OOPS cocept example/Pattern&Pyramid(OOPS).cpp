#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ;
class pattern
{
private :
	int i , j ;
public :
	void sympattern(int n);
	void numpyramid(int n);
	void sympyramid(int n);
};
int main()
{
	pattern obj ;
	int opt;
	int n ;
	
	while(1)
	{
	
	system("cls");
	
	cout<<"\n            Patterns Pyramid    " ;
	cout<<"\n            ----------------    " ;
	cout<<endl;									 // Menu options  
	cout<<endl<<"       1. Symbol Pattern    " ;
	cout<<endl<<"       2. Number pyramid    " ;
	cout<<endl<<"       3. Symbol Pattern    " ;
	cout<<endl<<"       4. Exit              " ;
	
	cout<<endl<<endl<<" Please Select Option(1-6) : ";
	cin>>opt;
	
	switch(opt)
	{
  		case 1 : cout<<"\n Enter Lines : ";
		         cin>>n;cout<<endl;obj.sympattern(n);break;
		case 2 : cout<<"\n Enter Lines : ";
		         cin>>n;cout<<endl<<endl;obj.numpyramid(n);break;	   	    
		case 3 : cout<<"\n Enter Lines : ";
		         cin>>n;cout<<endl<<endl;obj.sympyramid(n);break;	
		case 4 : return 0 ; break ;
		
		default :cout<<"\n Invalid Option Selected "<<endl ;break;	      	    
	 }    
	 cout<<endl<<endl<<endl<<endl<<endl;
	 system("PAUSE");
}	}
/* IMplementing Class Methods */
void pattern::sympattern(int n )
{
	char c ;
	cout<<"\n Enter a character to display :  "; // To display characters in pattern
	cin>>c;
	for (i=1 ; i<=n; i++)
	 {
		cout<<endl ;
		for (j=1;j<=n-i;j++) 
		{
			cout<<" ";
		}
		for (j=1;j<=i;j++) 
		{
			cout<<c;
		}
	}
}
void pattern::sympyramid(int n )
{
	char c ;
	cout<<"\n Enter a character to display :  ";
	cin>>c;
	for (i=1 ; i<=n; i++)
	 {
		cout<<endl ;
		for (j=1;j<=n-i;j++)
		 {
			cout<<" ";
		}
		for (j=1;j<=2*i-1;j++) {
			cout<<c;
		}
	}
}
void pattern::numpyramid(int n)
{
	int d=0;
	for (i=1;i<=n;i++)
	{
		cout<<endl;
		for (j=1;j<=n-i;j++)
		 {
			cout<<" ";
	 	 }
		 d=i;
		for (j=1;j<=i;j++)
		 {
			cout<<d%10 ;
			d++;
		}
		d-=2;
	    for (j=1;j<=i-1;j++)
		 {
			cout<<d%10 ;
			d--;
		}
			   
	}
}

