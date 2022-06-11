#include<iostream>

using namespace std;

class factorial

{

private : 

int i ; 

public:

long  fact ;



long findfactorial(int n )

{

fact=1 ;

for (i=1;i<=n;i++)

{

fact*=i ;

}
return fact ;
}

};


int main() 

{

int n ;

factorial a ;

cout<<"\n Enter a Number to find a factorial : " ;
cin>>n ;



cout<<"\n Factorial of NO "<<n<<" is "<<a.findfactorial(n);

}


