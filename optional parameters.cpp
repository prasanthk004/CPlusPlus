#include<iostream>

using namespace std ;


void line(int  x=25);
void line(double);

int main() 

{
line();
line(6);
line(12.56);
}




void line(int n )
 
{
int i ;

cout<<"\ninteger line \n";


for(i=0 ; i<=n ; i++)
{

cout<< "-";

}

}


void line (double x)

{

int n ;

x=n;

cout<<"\n double line ";


line(n);

}

