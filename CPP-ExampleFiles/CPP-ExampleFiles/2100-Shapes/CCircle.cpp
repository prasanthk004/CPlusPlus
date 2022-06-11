#include "shape.h"

#include <iostream>
#include <cstdio>
using namespace SHAPE;
using namespace std;

void CCircle::getinputs()
{
	cout << "\n\nEnter Shape Code: ";
	cin >> shapecode;
	
	cout << "\n\nEnter Radius: ";
	cin >> r;
}

float CCircle::area()
{
	return 22/7.0 * r * r;
}

char * CCircle::ToString()
{
	char *buff = new char[80];
	sprintf(buff, "%d %c %f %f", shapecode, shapetype, r, area());
	
	return buff;
}

