#include <iostream>
#include <iomanip>
using namespace std;

class MyCrypt
{
	public:
		string encrypt(string s)
		{
			string res;
			char c;
			int i;
			for(i=0; i<s.length(); i++)
			{
				c = s[i];
				c++;
				res.append(1, c);
			}
			
			return res;
		}
		
		string decrypt(string s)
		{
			string res;
			char c;
			int i;
			for(i=0; i<s.length(); i++)
			{
				c = s[i];
				c--;
				res.append(1, c);
			}
			
			return res;
	   	   }
		
};

int main()
{
	MyCrypt a;
	string s = "ABCDEF";
	string es = a.encrypt(s);
	
	cout << "Encrypted String : " << es << endl;
	cout << "Decrypted String : " << a.decrypt(es) << endl;
	
}

