// friend class 
#include <iostream> 
using namespace std; 
 
class CSquare; 

class CRectangle { 
    int width, height; 
  public: 
    int area () 
      {return (width * height);} 
    
void  convert (CSquare a) { 
  width = a.side; 
  height = a.side; 
} 
 
	
}; 
 
class CSquare { 
  private: 
    int side; 
  public: 
  	CSquare(int a)
	{
		side=a;
	}
	
    void set_side (int a) 
      {side=a;} 
	  
    friend class CRectangle; 
}; 
   
int main () { 
  CSquare sqr(4); 
  CRectangle rect; 

  rect.convert(sqr); 
  cout << rect.area(); 
  return 0; 
} 

