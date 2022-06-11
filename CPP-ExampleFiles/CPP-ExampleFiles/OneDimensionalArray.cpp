#include <iostream>
using namespace std;

int main()
{
	int n[5];
	int i;
	
	int sum=0;
	

	cout << "Enter 5 values one by one: ";
	for(i=0; i<5; i++)
		cin >> n[i];
		
	// Sum up all the values in the array.
	for(i=0; i<5; i++)
		sum = sum + n[i];
		
	cout << "Total : " << sum;
}

