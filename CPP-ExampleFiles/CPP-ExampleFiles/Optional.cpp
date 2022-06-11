#include <iostream>

using namespace std;


void line(int x=50);
void line(double);

int main()
{
	line();
	line(10);
	line(12.0);
}

void line(int n)
{
	int i;
		
	cout << "\n\n-- Integer Parametered function.\n";			// Start in new line.
	
	for(i=1; i<=n; i++)
		cout << "-";
		
}


void line(double n)
{
	int x = n;
	cout << "\n\n--Double Parametered Function\n";
	line(x);
}


