#include <iostream>

using namespace std;

struct student{
	string name;
	int age;
	
};


int main(){
	
	struct student ramu;
	
	struct student *p = &ramu;
	
	p->name = "Ramu";
	p->age = 20;
	
	cout << "Name : " << ramu.name << " Age: " << ramu.age;
	
}

