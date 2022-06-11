#include<iostream>
using namespace std ;
void swap(int * , int * , int * );

int main()


{

int a,b,c;

a=10 ;b=5;c=4 ;


cout<<"\n Values before Swaping "<<endl ;

cout <<"A =  "<<a<<"  B = "<<b<<"  C = "<<c<<endl ;

swap(&a,&b,&c) ;

cout<<"\n Values After Swaping "<<endl ;
cout <<"A =  "<<a<<"  B = "<<b<<"  C = "<<c<<endl ;

}

void swap(int *x,int *y ,int *z)

{

int s,t ;

s=*x ;
t=*y ;

*y=s;
*x=*z;
*z=t;


}






