#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std ;


int main()

{

	int n = 120 ;
	float x= 1213.18972;
	
   cout<<" Decimal     :  "<<dec<<n<<endl;
   cout<<" Hexadecimal :  "<<hex<<n<<endl;
   cout<<" OCTAL       :  "<<oct<<n<<endl;
   
   cout<<"\n Displays Floating Point numbers "<<endl;
   
   cout<<" FIXED       :  "<<fixed<<x<<endl;
   cout.precision(3);
   cout<<" Precision   :  "<<x;
   
   cout<<"\n\n Displays values in fixed width "<<endl;
   
   cout<<setw(25)<<left<<" Decimal     : "<<setw(15)<<left<<dec<<n<<endl;
   
   cout<<setw(15)<<left<<" HexaDecimal : "<<setw(15)<<left<<hex<<n<<endl;
   
   cout<<setw(15)<<left<<" Octal       : "<<setw(15)<<right<<oct<<n<<endl;

}	 

