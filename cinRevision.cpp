#include<iostream>
#include<iomanip>

using namespace std;

int main()

{

int a ;
float b ;
char c ;
char d[20];
string s;

//Getting integer number //

cout<<"\n Enter a Integer input : " ;
cin>>a ;


//Getting Floating  number //

cout<<"\n Enter a Floating integer : " ;
cin>>b;

//Getting  Characteer //
cout<<"\n Ener a Character : " ;
cin.ignore();
c=cin.get();

//Getting Character array  //
cout<<"\n Enter a String array : " ;
cin.ignore();
cin.getline(d,50);

//Getting  String  //
cout<<"\n Enter a String : " ;
cin.ignore();
getline(cin,s);


// OutPUt //

system("cls");

cout<<"\n Your INPUTS are "<<endl<<" Int Num : "<<a<<endl<<" Float num : "<<b<<endl<<cout<<" Char : "<<c<<endl<<" Char array : "<<d<<endl<<" String : "<<s<<endl;
}



