#include "menu.h"
#include <iostream>
#include <iomanip>

using namespace std;
using namespace SHAPE;

int CMENU::MainMenu()
{
	cout << endl << endl << endl;
	
	cout << "Menu Selection" << endl;
	cout << "1. Add Shape" << endl;
	cout << "2. List Shapes" << endl;

	cout << "3. Quit" << endl << endl;
	
	cout << "Enter Selection (1-3): ";
	cin >> selection;
	
	return selection;
}

int CMENU::ShapeMenu()
{
	cout << endl << endl << endl;
	
	cout << "Shape Selection" << endl;
	cout << "1. Circle" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Triangle" << endl;
	cout << "4. Goto Main Menu" << endl << endl;
	
	cout << "Enter Selection (1-4): ";
	cin >> selection;
	
	return selection;
}

int CMENU::LastSelection()
{
	return selection;
}

