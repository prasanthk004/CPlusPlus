#include "shape.h"

#include <iostream>
#include <cstdio>
using namespace SHAPE;
using namespace std;

void CTriangle::getinputs()
{
	cout << "\n\nEnter Shape Code: ";
	cin >> shapecode;
	
	cout << "\n\nEnter Base  : ";
	cin >> b;
	
	cout << "\n\nEnter Height: ";
	cin >> h;
}

float CTriangle::area()
{
	return b * h;
}

char * CTriangle::ToString()
{
	char *buff = new char[80];
	sprintf(buff, "%d %c %f %f %f", shapecode, shapetype, b, h, area());
	
	return buff;
}

