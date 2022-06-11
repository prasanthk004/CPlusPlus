#include<iostream>

using namespace std ;

int main()

{
    int a ;
    
    float b  ;
    
    char c ;
    
    string d;
    
    
    cout << "\n Enter integer number : " ;
    cin>> a;
    cout<<"\n Enter floating point number : ";
    cin>>b;
    cout<<"\n Enter character : ";
    cin>>c ;
    fflush(stdin);
    cout<<"\n Enter string : ";
    getline(cin,d);
    
    cout<<"\n int : " <<a;cout<<"\n float : "<<b ;cout<<"\n char : "<<c; cout<<"\n string:%d"<<d;
    
    
    
 }   

