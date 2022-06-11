#include<iostream>
#include<iomanip>

using namespace std ;

class TempConvrt

{

private :
float faherenheit,celcius ;

public :

float findcelcius (float f)

{

faherenheit=f ;

celcius=(5/9.0)*(f-32);

return celcius ;

}

float FindFaherenheit(float c )

{

celcius=c ;

faherenheit=(c*9.0/5)+32 ;
  
return faherenheit ;

}

float getcelcius()

{

return celcius ;

}

float getfaherenheit()

{

return faherenheit;
}

};


int main()

{

  TempConvrt ctemp,ftemp;
  
  
  ctemp.FindFaherenheit(24);
  ftemp.findcelcius(75.2);
  
  
  cout<<ctemp.getcelcius()<<"  Deg C is in Faherenheit is  "<<ctemp.getfaherenheit()<<endl;
  
  
  cout<<ftemp.getfaherenheit()<<" Deg F is in Celcius is "<<ftemp.getcelcius()<<endl;
  
  
 } 



