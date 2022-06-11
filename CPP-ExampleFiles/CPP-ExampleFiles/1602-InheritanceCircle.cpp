#include <iostream>
using namespace std;

class CCircle
{
	protected:
		float radius;
		
	public:
		CCircle(float r)
		{
			radius = r;
		}
		float getRadius(){return radius;}
		float getArea(){ return (22.0/7) * radius * radius; }
		float getCircumference(){return 2 * (22.0/7) * radius; }

};

class CCircle2: public CCircle
{
	public: 
		CCircle2(float r):CCircle(r)
		{
		}
		float getDiameter(){return 2*radius; }
};

int main()
{
	CCircle2 c(10.5);
	
	cout << endl << "Radius       : " << c.getRadius();
	cout << endl << "Area         : " << c.getArea();
	cout << endl << "Circumference: " << c.getCircumference();	 
	cout << endl << "Diameter     : " << c.getDiameter();	
}

