#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std ;

class minmax 


{

	private :

		int  i ;

public : 

	int a[100];
	int min , max ;
    //Getting input from user //
	int GetInput(int n)

	{
      cout<<endl<<"Enter "<<n<<" Numbers one by one"<<endl ;

		for(i=0;i<n;i++)
	
		{

		  cin>>a[i] ;

		}

	}
	
	//displaying output//
	void OutPut(int n)

	{
      cout<<endl<<" You Have entered : ";

		for(i=0;i<n;i++)
	
		{

		  cout<<endl<<" "<<a[i];

		}

	}
    //Finding Mninium Values // 
	int minimax(int n)
	{
	    min=a[0];
		max=a[0];
		
		for(i=0;i<n;i++)
		{
		  if(min>a[i])
		  	{
		    	min=a[i] ;
			}
		  else if(max<a[i])
		  {
		   	max=a[i] ;
		  }	   
		}
		return min ;
		}
				
};   



int main()

{

minmax ob1,ob2;

int n  ;

cout<<"MINIMUM & MAXIMUM FINDER "<<endl;

cout<<endl<<"How many numbers ? " ;
cin>>n ;

cout<<endl<<"Enter numbers for Object 1 : "<<endl;
ob1.GetInput(n);

cout<<endl<<"Enter numbers for Object 2 : "<<endl;
ob2.GetInput(n);

system("cls");

ob1.minimax(n);
ob2.minimax(n);

cout<<endl<<" Values fo Object 1 "<<endl; 
ob1.OutPut(n);
cout<<endl<<endl<<" Values fo Object 2 "<<endl; 
ob2.OutPut(n);
cout<<endl<<endl<<" Results "<<endl;
cout<<endl<<" Minimum Value of Object 1 : "<<ob1.min<<"    Maximum Value of object 1 : "<<ob1.max<<endl;
cout<<endl<<" Minimum Value of Object 2 : "<<ob2.min<<"    Maximum Value of object 2 : "<<ob2.max<<endl;


if(ob1.max>ob2.max)
{
	cout<<endl<<endl<<" Higehest maximum Value : "<<ob1.max;
}
else		
{
	cout<<endl<<endl<<" Higehest maximum Value : "<<ob2.max;
}


if(ob1.min<ob2.min)
{
	cout<<endl<<endl<<" Lowest minimum Value : "<<ob1.min;
}
else		
{
	cout<<endl<<endl<<" Lowest minimum Value : "<<ob2.min;
}




}	 	 
	
	
	


