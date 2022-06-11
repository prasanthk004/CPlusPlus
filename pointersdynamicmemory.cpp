#include<iostream>

using namespace std ;


int main()

{

int *p ;

int a[10],n,i ;


cout<<"\n Enter Nuber : " ;
cin>>n;

p=a;

for(i=0;i<n;i++)
{

cout<<"\n Enter Number "<<i+1<<":";
cin>>*p;
p++;

 

}


}

