#include<iostream>

using namespace std ;

class polygen 
{

	public : 
	
  virtual void DisplayResult(){cout<<endl<<" DISPLAY RESULT";} 
};


class Rectangle : public polygen 
{

	private : 
	
	float height;
	 float width ;
	float area ;
	
	public : 
	
	 Rectangle(float h,float w)
	 {
	 	height=h;
		width=w ;
	}	 
		
		
	float CalculateArea()
	{
	
		area=height*width ;
	}
	
	void DisplayResult()
	{ 
		 CalculateArea();
		cout<<endl<<" Rectangle " ;
		cout<<endl<<" Height    : "<<height ;
		cout<<endl<<" Width     : "<<width ;
		cout<<endl<<" Area      : "<<area ;
   }
	 
};	  	  	  
						

class Triangle : public polygen 
{

	private : 
	
	float base,height ;
	float area ;
	public : 
	
	Triangle(float b,float h)
	{
		base=b ;
		height=h ; 
	}
		
		
	float CalculateArea()
	{
	
		area=0.5*height*base ;
	}
	
	void DisplayResult()
	{
		CalculateArea();
		cout<<endl<<" Triangle  " ;
		cout<<endl<<" Height    : "<<height ;
		cout<<endl<<" Base      : "<<base ;
		cout<<endl<<" Area      : "<<area ;
	}
	
} ;


int main()
{

	
	Rectangle a(12.5,6.9);
	Triangle  b(6.2,5.6) ;
	polygen *t[2],*x,r ;
	t[0]=&a ;
	t[1]=&b ;
	 x=&r; 
	 x->DisplayResult();
	
 
  
    for(int i=0;i<2;i++)
	{
	
	 t[i]->DisplayResult();
	 
 	 }  


   
	
	

}	 

