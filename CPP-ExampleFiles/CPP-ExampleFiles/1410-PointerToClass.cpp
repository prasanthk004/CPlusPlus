#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class CompoundInterest
{
	private:
		float P, R, N;
		float CInterest;
		
	public:
		void readInputs()
		{
			cout << "Enter Principal : ";
			cin >> P;
			
			cout << "Enter Rate of Interest : ";
			cin >> R;
			
			cout << "Enter Years of Investment : ";
			cin >> N;
		}
		
		void Calculate()
		{
			CInterest = P * pow(1 + R/100, N);
		}
		
		void Display()
		{
			cout << "\nYour inputs are ...";
			cout << "\nPrincipal           : " << P;
			cout << "\nRate of Interest    : " << R;
			cout << "\nYears of Investment : " << N;
			cout << "\nCompound Interest   : " << CInterest;
		}
};

int main()
{
	CompoundInterest ci, *t;
	t = &ci;
	
	char c;

	do
	{	 
		t->readInputs();
		t->Calculate();
		t->Display();	 
		
		cout << endl << "Do you wish to continue ? Y/N ";
		cin.ignore();
		cin >> c;
		
	}while(c=='y' || c=='Y');
}

