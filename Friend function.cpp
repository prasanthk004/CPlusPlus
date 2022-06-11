#include<iostream>

using namespace std  ;
class sqr;
class rect
{

	int width , height ;
	
	public :
	
	int area()
	{
	
		return height*width ;
	}
	
	 void convert(sqr a)
	{
		
 	    height=a.side ;
		width=a.side ; 
		cout<<endl<<" Area of Rectangle : "<<a.area() ;
	} 
	
	
} ;
 

class sqr
{


	int side ;
	
	public : 
	
	sqr(int a)
	{
	
		side = a ;
		
	}
	
	int area()
	{
	
		return side*side ;
	}
	friend class rect ;
	
};





int main()
{

 	 	 	 	 	    
  sqr s(3); rect r ;
   
  
  cout<<endl<<" Area of Sqr "<<s.area() ;
  r.convert(s) ;
  
}  

