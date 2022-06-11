#include "shape.h"

#include <iostream>
#include <cstdio>
using namespace SHAPE;
using namespace std;

void CRectangle::getinputs()
{
	cout << "\n\nEnter Shape Code: ";
	cin >> shapecode;
	
	cout << "\n\nEnter Width : ";
	cin >> w;
	
	cout << "\n\nEnter Height: ";
	cin >> h;
}

float CRectangle::area()
{
	return w * h;
}

char * CRectangle::ToString()
{
	char *buff = new char[80];
	sprintf(buff, "%d %c %f %f %f", shapecode, shapetype, w, h, area());
	
	return buff;
}

