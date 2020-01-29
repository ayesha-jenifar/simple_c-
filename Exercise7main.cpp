#include<iostream>
using namespace std;


int main() {

	float num1, num2;
	float result;
	int choice;

	cout << "Please Enter number 1: ";
	cin >> num1;
	cout << "Please Enter number 2: " ;
	cin >> num2 ;

	cout << "Choose 1, if you want to add the numbers" << endl;
	cout << "Choose 2, if you want to subtract the numbers" << endl;
	cout << "Choose 3, if you want to multiply the numbers" << endl;
	cout << "Choose 4, if you want to divide the numbers" << endl;
	cin >> choice;

	cout << endl << endl;

	switch (choice) {
	case 1: {
		cout << "You have entered 1 to add two numbers" << endl;
		result = num1 + num2; 
		cout << "The result is " << result;
		break;
	}
	case 2: {
		cout << "You have entered 2 to subtract two numbers" << endl;
		result = num1 - num2;
		cout << "The result is " << result;
		break;
	}
	case 3: {
		cout << "You have entered 3 to multiply two numbers" << endl;
		result = num1 * num2;
		cout << "The result is " <<result;
		break;
	}
	case 4: {
		cout << "You have entered 4 to divide two numbers" << endl;
		result = num1 / num2;
		cout << "The result is " << result;
		break;
	}
	}

	cout << endl << endl;

	system("pause");
	return 0;
}

