#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream f;
	f.open("c:\\temp\\CFileRead.txt");
	
	string s;
	
	while(!f.eof())
	{
		getline(f, s);
		
		cout << s << "\n";
	}
	
	f.close();
	
}

