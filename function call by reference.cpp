#include <iostream>

using namespace std ;

void swap(int& , int&);

int main()

{

int a,b ;

cout<<"\n Enter value of A : ";
cin>>a;

cout<<"\n Enter value of B : " ;
cin>>b ;

cout<<"\n Values before SWAP A= "<<a<<" B= "<<b;

swap(a,b);

cout<<"\n Values After  SWAP A= "<<a<<" B= "<<b;

}


void swap(int& a , int& b )

{

int t ;

t=a ;

a=b ;

b=t;

}


