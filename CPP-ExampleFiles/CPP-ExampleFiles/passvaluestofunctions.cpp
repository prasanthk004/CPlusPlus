#include <iostream>
using namespace std;

void swap(int&, int&);
void swap(int *, int *);
int main()
{
	int a=10, b=15;
	
	cout << "\nValues before swap: " << "A = " << a << " B = " << b;

	swap(a, b);
	
	// swap(&a, &b);	
	
	cout << "\nValues after swap:  " << "A = " << a << " B = " << b;
}

void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

