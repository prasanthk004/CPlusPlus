#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ofstream f;
	
	try
	{

		f.open("c:\\temp\\CFileWrite.txt" );

		if(!f.is_open())				
			throw("Unable to create file. Please verify the access permission and try again.");

		f << "Hello World!";
	}
	catch(char* se)
	{
		cout << se << endl;
	}
	if(f.is_open())
		f.close();	
	
	cout << "Successfully completed!";
}

