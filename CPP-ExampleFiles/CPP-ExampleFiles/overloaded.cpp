#include <iostream>

using namespace std;


void line();
void line(int);
void line(double);

int main()
{
	line();
	line(10);
	line(12.0);
}

void line()
{
	int i;
		
	cout << "\n-- Empty Parametered function.\n";			// Start in new line.
	
	for(i=1; i<=50; i++)
		cout << "-";
		
}

void line(int n)
{
	int i;
		
	cout << "\n--Integer Parametered Function\n";			// Start in new line.
	
	for(i=1; i<=n; i++)
		cout << "-";
}

void line(double n)
{
	int x = n;
	cout << "\n--Double Parametered Function\n";
	line(x);
}


