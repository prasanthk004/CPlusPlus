#include <iostream>
#include <cmath>

using namespace std;

class MyLib
{
	private:
		int calls;
		
		void incrementcalls();
	public:
		MyLib(){
			calls=0;
			cout << "Initialization completed...." << endl;
		}
		MyLib(int a){
			calls = a;
			cout << "Initialization with parameter completed...." << endl;	
		}
		
		void initCalls();
   	    long factorial(int n);
		bool IsPrime(long n);
		int getCallsCount();
};


int main()
{
	MyLib a(5);
	
	cout << "Factorial of 5 is " << a.factorial(5) << endl << endl;
	
	cout << "5 is a " << (a.IsPrime(5)? "Prime" : "Not a Prime") << endl << endl;
	cout << "6 is a " << (a.IsPrime(6)? "Prime" : "Not a Prime") << endl << endl;
	
	cout << "No. of calls made : " << a.getCallsCount();
}


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

