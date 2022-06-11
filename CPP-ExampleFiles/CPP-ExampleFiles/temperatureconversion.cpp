#include <iostream>

using namespace std;

int main()
{
	float c, f;
	
	cout << "Enter centigrade: ";
	cin >> c;
	
	f = (9.0/5) * c + 32;
	
	cout << "Fahrenheit: " << f;
}

