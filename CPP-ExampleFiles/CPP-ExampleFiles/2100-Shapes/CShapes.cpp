#include "cshapes.h"
#include "shape.h"
#include <fstream>
void CShapes::addshape()
{
	int shapeopt;
	CShape *s;
	ofstream f;

	shapeopt = o.ShapeMenu();
	
	switch(shapeopt)
	{
		case 1:
			s = new CCircle();
			break;
		case 2:
			s = new CRectangle();
			break;
		case 3:
			s = new CTriangle();
			break;
		case 4:
			return;
	}
	s->getinputs();
	f.open("c:\\temp\\cpp\\shapes.txt", ios::app);
	f <<  s->ToString() << endl;
	f.close();
	
	delete s;
}
	
void CShapes::listshapes()
{
	ifstream fr;
	string buff;
	
	cout << endl << endl;
	
	cout << "List of Shapes..." << endl;
	fr.open("c:\\temp\\cpp\\shapes.txt");
	while((getline(fr, buff))!=NULL)
		cout << buff << endl;
	fr.close();
}

void CShapes::start()
{
	int opt;

	
	do{
		opt = o.MainMenu();
		
		if(opt==3) break;
		
		switch(opt)
		{
			case 1:
				addshape();
				break;
			case 2:
				listshapes();
				break;
		}
		
	}while(opt!=3);
}

