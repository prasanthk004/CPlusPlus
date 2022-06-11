#include <iostream>
using namespace std;

class CPolygon
{
	public:
		virtual void DisplayResults(){};
};

class CRectangle : public CPolygon
{
	private:
		float width, height, area;
	public:
		CRectangle(float w, float h)
		{
			width = w;
			height = h;
		}
		void CalculateArea()
		{
			area = width * height;	  
		}
		void DisplayResults(){
			CalculateArea();
			cout << endl << "Rectangle:";
			cout << endl << "Width : " << width << " Height: " << height;
			cout << endl << "Area  : " << area;
		}
};

class CTriangle : public CPolygon
{
	private:
		float base, height, area;
	public:	   	   
		CTriangle(float b, float h)
		{
			base = b; height = h;
		}
		void CalculateArea()
		{
			area = 0.5 * base * height;	   
		}
		void DisplayResults(){
		
			CalculateArea();
			
			cout << endl << "Triangle:";
			cout << endl << "Base  : " << base << " Height: " << height;
			cout << endl << "Area  : " << area;
		}
};


int main()
{
	CRectangle a(10.0, 20.0);
	CTriangle b((float)10.0, (float)15.0);
	
	CPolygon *t[2];
	t[0] = &a;
	t[1] = &b;
	
	for(int i=0; i<2; i++)
		t[i]->DisplayResults();
}

