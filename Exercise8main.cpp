#include<iostream>
using namespace std;

// Fuction prototyping
bool prime(int);

int main() {

	int numbers[1000];
	float average;
	bool prime_number = false;

	for (int counter = 0; counter < 1001; counter++) {
		numbers[counter] = counter;
	}

	cout << endl << endl;

	for (int counter = 0; counter < 1001; counter++) {
		cout << numbers[counter] << "   ";
	}

	cout << endl << endl;
	cout << " Prime Numbers " << endl;


	for (int counter = 0; counter < 1001; counter++) {
		prime_number = prime(numbers[counter]);

		if (prime_number == true) {
			cout << numbers[counter] << " ";
		}
	}

	cout << endl << endl;

	system("pause");
	return 0;
}

bool prime(int num1) {

	bool isPrime = true;
	for (int counter = 2; counter <= num1 /2; counter++) {
		if (num1 % counter == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
	cout << endl;

}