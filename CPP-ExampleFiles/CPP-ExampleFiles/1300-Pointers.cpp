#include <iostream>

using namespace std;

int main(){
	int a;
	
	int *b = &a;
	
	a = 10;
	
	*b = *b * 3;
	
	cout << a;
}

