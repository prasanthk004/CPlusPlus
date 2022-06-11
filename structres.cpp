#include<iostream>
using namespace std ;


typedef struct employee
{
char name [30] ;

float salary ;

float bonus,netsalary;
}emp;

int main()

{

emp sal ;

cout<<"\n Hi Enter your name : ";
cin.getline(sal.name,30);

cout<<"\n Enter your Salary : ";
cin>>sal.salary ;

sal.bonus = sal.salary * 50/100 ;
sal.netsalary=sal.salary + sal.bonus ;

cout<<"\n Press Any Key to continue....";
getchar();
system("cls");

cout<<"\n Hi " <<sal.name<<" please find your Payment Details below "; 
cout<<"\n\n   Salary  : "<<sal.salary<<"\n   Bonus   : "<<sal.bonus<<"\n   Total   : "<<sal.netsalary ;

}
  

