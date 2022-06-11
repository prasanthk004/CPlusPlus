#include <iostream>
using namespace std;

int main()
{
	int a;
	char b;
	float c;
	char name[50];
	
	// Get the Integer Input.
	cout << "Enter a Integer Number: ";
	cin >> a;
	
	// Get the float input.
	cout << "Enter a floating number: ";
	cin >> c;
	
	// Get the character input.
	cout << "Enter a Character : ";
	cin.ignore();
	cin.get(b);
	
	// Get the array input.
	cout << "Enter your name : ";
	cin.ignore();
	cin.getline(name, 50);
	
	// Sum up the inputs.
	cout << endl << endl;
	cout << "Here are your input summary:" << endl;
	
	cout << "Name : " << name << endl;
	cout << "A    : " << a << endl;
	cout << "C    : " << c << endl;
	cout << "B    : " << b << endl;
}

