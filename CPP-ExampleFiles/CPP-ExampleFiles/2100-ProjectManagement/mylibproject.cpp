#include <iostream>
#include <cmath>
#include "MyLib.h"

using namespace Collectiva;
using namespace std;

int main()
{
	MyLib a;
	a.initCalls();
	
	cout << "Factorial of 5 is " << a.factorial(5) << endl << endl;
	
	cout << "5 is a " << (a.IsPrime(5)? "Prime" : "Not a Prime") << endl << endl;
	cout << "6 is a " << (a.IsPrime(6)? "Prime" : "Not a Prime") << endl << endl;
	
	cout << "No. of calls made : " << a.getCallsCount();
}

