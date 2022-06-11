#include "MyLib.h"
#include <cmath>
using namespace Collectiva;
/* Implementation of MyLib goes */

void MyLib::initCalls(){
	calls = 0;
}

void MyLib::incrementcalls()
{
	calls++;
}

long MyLib::factorial(int n)
{
	incrementcalls();

	long f=1;
	int i;
	for(i=1; i<=n; i++)
		f *= i;
	
	return f;
}

bool MyLib::IsPrime(long n)
{

	int d = sqrt(n);
	int i;
	bool Prime=true;	

    incrementcalls();
	
	for(i=2; i<=d; i++)
		if(n % i==0)
		{
			Prime=false;
			break;
		}
	return Prime;
}

int MyLib::getCallsCount()
{
	return calls;
}

