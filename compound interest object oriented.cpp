#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ;
 
 
class CompoundInterest

{
private :
float P,R,N;

public :

float ci ;

void GetInputs()

{

cout<<" Enter Priciple amount : " ;
cin>> P ;

cout<<endl<<"Enter Interest Rate : ";
cin>>R ;

cout<<endl<<" Enter No.OF years : " ;
cin>>N;

system("cls");

}

void Calculate()

{

ci=P*pow(1+R/100,N);
}
void display()

{

cout<<endl<<" Priciple Amount : "<<P<<endl<<" Rate of Interest : "<<R<<"%"<<endl<<" NO.OF Years  : "<<N<<endl<<" Compound Interest : " <<ci<<"RS" ;
}

};

int main()

{


CompoundInterest c;


int n ;

while(n!=0)
{
	c.GetInputs();
 	c.Calculate();
	c.display() ;


	cout<<"\n\n Press any numbers to continue again or else press 0 to exit : " ;
	cin>>n;

}


}


 





