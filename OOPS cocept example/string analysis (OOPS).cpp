#include<iostream>
using namespace std;
class stringanalysis
{
private :
	int i ;
public:
	int ac,wsc,vc,nc,cc,oc;
	stringanalysis()
	{
		ac=0;
		wsc=0;
		vc=0;
		nc=0;
		cc=0;
		oc=0;
		cout<<"\n ....... Initialization completed........";
	}
	int alphabets(string s)
	{
		for (i=0;s[i]!='\0';i++)
		{
			if ((s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z'))
			{
				ac++;
			}
		}
		return ac ;
	}
	int num(string s) {
		for (i=0;s[i]!='\0';i++) {
			if (s[i]>='0'&&s[i]<='9') {
				nc++;
			}
		}
		return nc ;
	}
	int vowels(string s) {
		for (i=0;s[i]!=0;i++) {
			if ((s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z')) {
				if ((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') || (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
				{
					vc++;
				}
				else
				{
					cc++;
				}
			}
		}
		return vc;
	}
	int whitespace(string s)
	{
		for (i=0;s[i]!=0;i++) {
			if (((s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z'))!=(s[i]>='0'&&s[i]<='9')) {
				if (s[i]==' ' || s[i]=='\t'||s[i]=='\n') {
					wsc++;
				} else {
					oc++;
				}
			}
		}
		return wsc;
	}
};
int main()
{
	string s;
	stringanalysis str;
	cout<<"\n Enter a String : " ;
	getline(cin,s);
	system("cls");
	cout<<"\n You have entered :- "<<"       "<<s;
	cout<<endl<<"\n Alphabets count  : "<<str.alphabets(s);
	cout<<endl<<"\n Numeric  Count   : "<<str.num(s);
	cout<<endl<<"\n Vowels  Count    : "<<str.vowels(s);
	cout<<endl<<"\n Consonent count  : "<<str.cc ;
	cout<<endl<<"\n BlankSpace Count : "<<str.whitespace(s);
	cout<<endl<<"\n Other char count : "<<str.oc<<endl<<endl;
}

