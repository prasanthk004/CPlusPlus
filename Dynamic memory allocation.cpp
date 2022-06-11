#include<iostream>

using namespace std ;

class student 

{

	private :
		int i ;
		int n ;
		
	public :
	
	string name ;
	int age ;
	int *mark ;
	int mar[10] ;
	int total ;
	
	student()
	
	{
	     total=NULL;    
		mark= new int[n] ;
	}
	
	void Inputs()
		{
			cout<<"\n Enter Student Name : ";
			getline(cin,name);
		
			
			cout<<"\n Enter Student Age : ";
			cin>>age ;
			
			cout<<"\n Enter how many Subject : ";
			cin>> n ;
			
			for(i=0;i<n;i++)
			{
				cout<<"\n Enter Mark "<<i+1<<" : ";
				cin>>*mark;
				
				total+=*mark;
				mark++;
				cout<<endl<<"\n Mark "<<i+1<<" : "<<&mark;
					 
				
			}
			
			
			
		}
		
		/*void display()
		
			{
			
				for(i=0;i<n;i++)
				{
				
						
			 	  }
			} */	  
	
};


int main()

{

 
	student *s=new student();
	
	s->Inputs();
	
	system("cls");
	
	
	cout<<" Student Name : "<<s->name<<endl;
	cout<<" Student Age  : "<<s->age<<endl<<endl ;
	
	cout<<" Student  Marks "<<endl;
	//	  s->display();
	
	cout<<"\n Total : "<<s->total ;
		
	
	
	
}	 	 	 	 	 	 	 	 

