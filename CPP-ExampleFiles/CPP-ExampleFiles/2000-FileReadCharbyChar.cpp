#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ifstream f;
	

	f.open("c:\\temp\\CFileRead.txt" );
	
	char c;
	while(!f.eof())
	{
		c = f.get();
	
		cout.put(c);
		
	}

	if(f.is_open())
		f.close();	
	
}

