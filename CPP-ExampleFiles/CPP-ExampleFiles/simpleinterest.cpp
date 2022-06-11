#include <iostream>

using namespace std;

class SimpleInterest
{
	private:
		float P, R, N;	// Properties (Protected).
	
	public:
		float si;
		
		void ReadInputs()		// Method
		{
			cout << "Enter Principal : ";
			cin >> P;
			
			cout << "Enter Rate of Interest : ";
			cin >> R;
			
			cout << "Enter Number of Years : ";
			cin >> N;
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
		
};

int main()
{
	SimpleInterest si;
	
	si.ReadInputs();
	si.calculate();
	
	cout << "\n\n\nYour Inputs are ...";
	cout << "\n\nPrincipal        : " << si.getPrincipal();
	cout << "\n\nRate of Interest : " << si.getRateOfInterest();
	cout << "\n\nNo. of Years     : " << si.getNoOfYears();
	cout << "\n\nSIMPLE INTEREST  : " << si.si;
	

}

