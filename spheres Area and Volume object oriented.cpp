#include<iostream>
#include<cmath>

using namespace std ;


class sphere 

{

private : 
float 	 R,A,V ;
public : 
 	
	void GetAreaVol(float r)
	
	{
	
	    R=r ;
		
		V=4 * 22.0/7 * pow(r,3)/3 ;
		A=4 * 22.0/7*r*r;
	}
	
	float getvol()
	
	{
	
		return V;
	}
	
	float getarea()
	{
	
		return A ;
	}
	float getradius()
	{
	
		return R ;
	}
	
	
} ;


int main()

{


	sphere a ;
	float r ;
	
	cout<<"\n Enter the Radius of the SPHERE : " ;
	cin>>r ;
	
	a.GetAreaVol(r);
	
	cout<<"\n Radius of Shpere  : "<<a.getradius();
	cout<<"\n Volume of Shpere  : "<<a.getvol();
	cout<<"\n Radius of Shpere  : "<<a.getarea()<<endl;
	
}	 
						
	

