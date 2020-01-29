#include<iostream>
#include<string>
using namespace std;

void setAge(string  &name, int &age);


int main() {
	int age = 0;
	string name;
	setAge(name,age);
	cout << "The name you entered: " << name << endl;
	cout << "The age you entered: " << age;

	cout << endl << endl;
	system("pause");
	return 0;
}

void setAge(string  &nam, int &age)
{
	cout << "Enter your Name: ";
	getline(cin, nam);
	cout << "Enter your Age: ";
	cin >> age;
}