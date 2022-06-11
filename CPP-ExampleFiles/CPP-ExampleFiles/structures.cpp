#include <iostream>
using namespace std;

struct student
{
	char name[30];
	int age;
};

int main()
{
	struct student a;
	
	cout << "Enter Name: ";
	cin.getline(a.name, 30);
	
	cout << "Enter Age: ";
	cin >> a.age;
	
	
	cout << "Hello " << a.name << " you are " << a.age << " years old!";
	
	return 0;
}

