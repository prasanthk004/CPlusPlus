#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std ;

class AvgNum 

{

private : 

int i ; 
float in ;
int n ;

public :

int sum;
float avg ;

float sumavg ()
{

sum=0;avg=0;
cout<<"\n Enter how many numbers : ";
cin>>n;

cout<<endl<<" Enter a values  1 by 1 :"<<endl;

for(i=1 ; i<=n ; i++)
{
cout<<endl;
cin>>in;

sum+=in ;

}
cout<<endl;
cout<<left<<setw(5)<<"Sum : "<<sum<<setw(5)<<right<<" AVG : "<<sum/n<<endl;
cout<<endl;
}

};

int main()

{

AvgNum a,b ;
cout<<"\n Please enter value of Object A "<<endl;

a.sumavg();

cout<<"\n Please enter value of Object B "<<endl;

b.sumavg();

if(a.avg>b.avg)

{

cout<<"\n Object a is bigger than B "<<endl;
}

else

{
cout<<"\n Object B is bigger than A "<<endl;
}

}





