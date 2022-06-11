#include<stdlib.h>
#include<iostream>
#include<Windows.h>
#include<conio.h>

using namespace std ;

char animate[]= {'|','-','/','\\'};

class uyir 

{

	int pos,i; 
	
	public :
	
		uyir()
		
		{
			pos=rand()%4 ;
			
		}
		
		char getChar()
		
			{
				
				char res=animate[pos++] ;
				pos=pos%4;
				
				return res ;
				
			}
			
			void Act()
			
			{
				 
				 
			 
				cout<<getChar()<<" ";
				 
			 
			}
			
};


#define maxlives 50

class kadavul 

{

	uyir Lives[maxlives];

	public :
	
		
	
		void play()
		
			{
				int i ;
				char c ;
				int isRotate=1;
				
				cout<<"Press ESC to STOP . Press SPACE for toggle  roataion"<<endl<<endl;
				
				while(1)					
				  {
					if(kbhit())
					{
						c=getch();
						if(c==27) break;
						if(c==32) isRotate*=-1;
					}	 
					if(isRotate==1)
					{	 
					for(i=0;i<maxlives;i++)	 
				
					{  	
				  	   
;					Lives[i].Act(); 							 	 
				
					}   		
					 	
				 	cout<<"\r";
					Sleep(100);
				   
				 	}
				 
				
			 	 
				}	 
			}
			
};	  	  	  
				

int main()

{
 
 kadavul k ;
 
 k.play() ;
 
/*uyir o ;
 int i ;

 for (i=0;i<30;i++)
 {
 	o.Act();
 ;
	Sleep(100);
 }
 */
 
	
}	 
						
	

