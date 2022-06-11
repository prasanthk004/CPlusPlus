#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	int i, j;
	int max=0;	
	int mat[3][3];
	cout << "Enter 9 numbers : ";
	// Get Input.
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
		{
			cin >> mat[i][j];
			
			/* Find the Maximum */
			if(i==0 && j==0)			   
				max = mat[i][j];
			else if(max < mat[i][j])	
		   		max = mat[i][j];
		}
		
	// Display output in Matrix Format.	   
	for(i=0; i<3; i++)
	{
		cout << endl;
		for(j=0; j<3; j++)
			cout << setw(4) << mat[i][j];
	}	 
	cout << endl << "Maximum in the given Matrix: " << max;

	return 0;
}

