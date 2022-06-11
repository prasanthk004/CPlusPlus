#include<iostream>
using namespace std ;


struct student 
{

 string name ;

int age ;

};


int main()

{

struct student d; 


struct student *p=&d ;

p->name="KP";
p->age=22;

cout<<"\n NAME : "<<d.name<<"\n AGE  : "<<d.age ;

}



