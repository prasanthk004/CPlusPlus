#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n = 100;
	float x = 1234.54321;
	
	cout << "Decimal : " << dec << n << endl;
	
	cout << "Hexadecimal : " << hex << n << endl;
	
	cout << "Octal : " << oct << n << endl;
	
	cout << "Fixed : " << fixed << x << endl;
	
	cout.precision(2);
	cout << "Precision(2) : " << x << endl;
	
	
	/* Try the follwing without right and with right */
	
	cout << setw(15) << left << "Decimal : " << setw(10) << right << dec << n << endl;
	
	cout << setw(15) << left << "Hexadecimal : " << setw(10) << right << hex << n << endl;
	
	cout << setw(15) << left << "Octal : " << oct << setw(10) << right << n << endl;
	
	cout << setw(15) << left << "Fixed : " << fixed << setw(10) << right << x << endl;
	   
	
	
	return 0;
}


