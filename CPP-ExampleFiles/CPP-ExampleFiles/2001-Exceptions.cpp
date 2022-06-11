#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ifstream f;
	
	try
	{

		f.open("c:\\temp\\CFileRead.txt" );
		
		if(!f.is_open())
			throw ("Unable to open the file ");
		
		char c;
		while(!f.eof())
		{
			c = f.get();
		
			cout.put(c);
			
		}
	}
	catch(char* se)
	{
		cout << se << endl;
	}
	if(f.is_open())
		f.close();
		
	cout << "File successfully closed and the program terminated normally.";	
	
}

