#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Statistics
{
	private:
		int *ages;
		int nAges;
		int minAge, maxAge;
		float averageAge;
		
		void calculateStatistics();
		
	public:
	
		Statistics(int n);
		
		~Statistics(){
			cout << endl << "Destructor is freeing memory..." << endl;
			delete ages;
		}
		
		void readInputs();
		void displayStatistics();
		
};

int main()
{
	int n;
	cout << "How many candidates? ";
	cin >> n;
	
	Statistics s(n);
	s.readInputs();
	s.displayStatistics();	  
}

Statistics::Statistics(int n)
{
	nAges = n;
	ages = new int[n];
}

void Statistics::readInputs()
{
	cout << "Enter " << nAges << " ages : ";
	for(int i=0; i<nAges; i++)
	{
		cin >> ages[i];
	}
}

void Statistics::calculateStatistics(){
	minAge = ages[0];
	maxAge = ages[0];
	int totalAge = 0;
	for(int i=0; i<nAges; i++){
		totalAge+=ages[i];
		
		if(minAge>ages[i]) minAge = ages[i];
		if(maxAge<ages[i]) maxAge = ages[i];		
	}	 
	averageAge = (float)totalAge / nAges;
}

void Statistics::displayStatistics()
{
	calculateStatistics();

	cout << endl << endl;
	cout << "Input ages are : ";
	for(int i=0; i<nAges; i++)
		cout << ages[i] << " ";
	
	cout << endl << "Minimum Age: " << minAge;
	cout << endl << "Maximum Age: " << maxAge;
	cout << endl << "Average Age: " << averageAge;
}

