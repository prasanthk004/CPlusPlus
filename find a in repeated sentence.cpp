#include<iostream>
using namespace std ;

int main()

{


	char *s,str[30] ;
	int i ,j ;
	
 	s=str ;
	
	unsigned long long n ;
	unsigned long long  sl=0,ca=0,rem,res,tset ;
	
  
	
	cout<<endl<<" Enter the String : ";
 	cin.get(str,30) ;
	

	cout<<endl<<" Enter No.of characters : "; 
	cin>>n ;
	
	cout<<endl;
	cout<<endl;
	
	while(*s)
	{
		sl++ ;
		
		if(*s=='a') { ca++ ;}
		s++ ;
		
	}
	
	cout<<endl<<" String length : "<<sl;
	cout<<endl<<" A count in 1 set "<<ca ;
	cout<<endl<<endl<<endl ;
	
	
	 tset=n/sl ;
	 res=tset*ca ;
	 rem=n%sl ;
	 
	cout<<endl<<" Total Sets Available : "<<tset ;
	cout<<endl<<" Remaining Characters : "<<rem ;
	cout<<endl<<" "<<res<<" A Available in "<<tset<<" of Sets ";	
	
	 ca=0 ;
	 
	 for(i=0;i<rem;i++)
	 {
	 
	 	if(str[i]=='a'){ ca++;cout<<endl<<ca ; }  
		
		
	}
	
	res+=ca ;
	

    cout<<endl<<" "<<res<<" Numbers of A available in "<<n<<" Characters " ;
	cout<<endl<<endl<<endl ; 
 
   
	 
}

