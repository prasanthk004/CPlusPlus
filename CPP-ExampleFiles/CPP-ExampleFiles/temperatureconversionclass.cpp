#include <iostream>
#include <iomanip>

using namespace std;

class TemperatureConversion
{
	private:
		float Fehrenheit, Celsius;
		
	public:
		float findCelsius(float F)
		{
			Fehrenheit = F;
			
			Celsius = (5/9.0) * (F-32);
			
			return Celsius;
		}
		
		float findFahrenheit(float C)
		{
			Celsius = C;
			
			Fehrenheit = (C * 9.0/5) + 32;
		}
		
		float getCelsius()
		{
			return Celsius;
		}
		
		float getFahrenheit()
		{
			return Fehrenheit;
		}
};

int main()
{
	TemperatureConversion F, C;
	
	F.findCelsius(130);
	
	C.findFahrenheit(45);

	cout << F.getFahrenheit() << " deg F in Celsius is " << F.getCelsius() << endl;
	cout << C.getCelsius() << " deg C in Fahrenheit is " << C.getFahrenheit();	   
}

