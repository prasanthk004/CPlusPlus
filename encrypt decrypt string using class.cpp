#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

class CryptString

{

	public :
	 
	 string encrypt(string s)
	 
	 {
	 	
		int i ;
		
	    string res  ;
		
		for(i=0 ;i<s.length();i++)
		{
		
			s[i]++;
			res.append(1,s[i]);
		}	
		return res ; 
    }



 	 
	 string decrypt(string s)
	 
	 {
	 	
		int i ;
		
	    string res ;
				
		for(i=0 ;i<s.length();i++)
		{
		
			s[i]--;
			res.append(1,s[i]);
		}	 
		
		return res ;
    }  
	
};



int main()

{



CryptString st;

string s ;
string es  ; 

cout<< " \n Enter a String : " ;
getline(cin,s);
es=st.encrypt(s);

cout<<" Entered  String  : " <<s<<endl ;
cout<<" Encrypted String : " <<es<<endl ;
cout<<" Decrypted String : " <<st.decrypt(es)<<endl ;

}








	  

