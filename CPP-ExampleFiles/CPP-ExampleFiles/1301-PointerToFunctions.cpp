#include <iostream>

using namespace std;

void swap(int *, int *);

int main(){
	int a=5, b=10;
	
	cout << a << ", " << b << endl;
	
	swap(&a, &b);
	
	cout << a << ", " << b;
		

}

void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}

