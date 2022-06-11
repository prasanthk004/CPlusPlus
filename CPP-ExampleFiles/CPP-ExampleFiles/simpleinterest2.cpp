#include <iostream>

using namespace std;

class SimpleInterest
{
	private:
		char name[30];
		float P, R, N;	// Properties (Protected).
	
	public:
		float si;
		
		void ReadInputs()		// Method
		{
			cout << "Enter you name: ";
			cin.getline(name, 30);
			
			cout << "Enter Principal : ";
			cin >> P;
			
			cout << "Enter Rate of Interest : ";
			cin >> R;
			
			cout << "Enter Number of Years : ";
			cin >> N;
			
			char tmp[10];
			cin.getline(tmp, 10);
		}
		
		float calculate()
		{
			si = P * R * N / 100;
		}
		
		float getSimpleInterest()
		{
			return P * R * N / 100;
		}
		
		float getPrincipal()
		{
			return P;
		}
		
		float getRateOfInterest()
		{
			return R;
		}
		
		float getNoOfYears()
		{
			return N;
		}
		
		void PrintOutput(){
			cout << "\n\n\nName             : " << name;
			cout << "\n\nPrincipal        : " << P;
			cout << "\n\nRate of Interest : " << R;
			cout << "\n\nNo. of Years     : " << N;
			cout << "\n\nSIMPLE INTEREST  : " << si;
		}
};

int main()
{
	SimpleInterest a, b, c;
	
	SimpleInterest h;
	
	a.ReadInputs(); a.calculate();
	b.ReadInputs(); b.calculate();
	c.ReadInputs(); c.calculate();
	
	if(a.si > b.si && a.si > c.si)	  	  
		h = a;
	else if(b.si > a.si && b.si > c.si)
		h = b;
	else
		h = c;
	
	h.PrintOutput();
}

