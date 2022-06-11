#include <iostream>
#include <cmath>
using namespace std;

class Sphere
{
	private:
		float Radius, Volume, Area;
		
	public:
		void setRadius(float r)
		{
			Radius = r;
			
			Volume = 4 * 22/7.0 * pow(r, 3) / 3;
			Area = 4 * 22/7.0 * r * r;
		}
		
		float getRadius()
		{
			return Radius;
		}
		
		float getVolume()
		{
			return Volume;
		}
		
		float getArea()
		{
			return Area;
		}
};

int main()
{
	Sphere a;
	float r;
	
	cout << "Enter the radius of Sphere : ";
	cin >> r;
	
	a.setRadius(r);
	
	cout << "\n\nResults:";
	cout << "\n\nRadius : " << a.getRadius();
	cout << "\n\nVolume : " << a.getVolume();
	cout << "\n\nArea   : " << a.getArea();
	
}

