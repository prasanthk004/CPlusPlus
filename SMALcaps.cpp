#include<iostream>

using namespace std;


class smallcaps

{

private :
 int i ;
 
 public: 
 
 
 string CAPS (string s)
 {
 
 for(i=0;s[i]!='\0';i++)
 
 {

 
 if(s[i]>='a'&&s[i]<='z')
 
 {
 
 s[i]-=32  ;
 
 
 }
 }
 return s;
 }
 
 string small(string s)
 {
 
 for(i=0;s[i]!='\0';i++)
 
 {

 
 if(s[i]>='A'&&s[i]<='Z')
 
 {
 
 s[i]+=32  ;
 
 
 }
 }
 return s;
 }
 
 string convert(string s)
 {
 
 for(i=0;s[i]!='\0';i++)
 
 {

 if((s[i]>='a'&&s[i]<='z')|| (s[i]>='A'&&s[i]<='Z'))
 
 if(s[i]>='a'&&s[i]<='z')
 
 {
 
 s[i]-=32  ;
 
 }
 
 else
 {
 
  s[i]+=32;
 
 }
 }
 return s;
 }
 
 
};



 int main()
 
 {
 
 string s ;
 
 smallcaps str ;
 
 cout<<"\n Enter a string : ";
 cin>>s;
 
 cout<<endl<<" SMALL TO CAPS   : " <<str.CAPS(s);
 cout<<endl<<" CAPS TO  SMALL  : " <<str.small(s);
 cout<<endl<<" S T C C T S     : " <<str.convert(s);
 }
 
 
 
 
 	

