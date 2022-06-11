#include<iostream>
#include<iomanip>

using namespace std ;

class sumintoddeven

{


private :

int n ,i ;

public :

int osum,esum;

int SumofEven()

{
esum=0;
cout<<"\n Enter range of number to indentify sum of even : " ;
cin>>n ;

cout<<left<<setw(5)<<"NO.  "<<left<<setw(5)<<"Sum  "<<endl<<endl;


for (i=2;i<=n;i+=2)
{

esum=esum+i ;

cout<<left<<setw(5)<<i<<left<<setw(5)<<esum<<endl;

}

}

int SumofOdd()

{
osum=0;
cout<<"\n Enter range of number  to indentify sum of ODD : " ;
cin>>n ;

cout<<left<<setw(5)<<"NO.  "<<left<<setw(5)<<"Sum  "<<endl<<endl;


for (i=1;i<=n;i+=2)
{

osum=osum+i ;

cout<<left<<setw(5)<<i<<left<<setw(5)<<osum<<endl;

}

}
};

int main()

{


sumintoddeven a,b ;

a.SumofEven() ;
system("pause");
system("cls");
a.SumofOdd() ;
system("pause");
system("cls");
b.SumofEven() ;
system("pause");
system("cls");
b.SumofOdd() ;
system("pause");
system("cls");

cout<<" SUM OF EVEN INEGER OBJ A : " <<a.esum<<endl;
cout<<" SUM OF  ODD INEGER OBJ A : " <<a.osum<<endl<<endl;
cout<<" SUM OF EVEN INEGER OBJ B : " <<b.esum<<endl;
cout<<" SUM OF ODD  INEGER OBJ B : " <<b.osum<<endl;



}


