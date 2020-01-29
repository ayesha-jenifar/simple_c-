#include<iostream>
using namespace std;

// Fuction prototyping
void print (int);

int main() {

	int month[12], total = 0;
	float average;


	// Taking Exam Scores
	for (int counter = 1; counter < 13; counter++) {
		cout << "Input amount of rain in month " << counter << ":";
		cin >> month[counter];
	}

	cout << endl << endl;

	for (int counter = 1; counter < 13; counter++) {
		print(month[counter]);
	}

	cout << endl << endl;

	system("pause");
	return 0;
}

void print(int num1) {

	for (int counter = 1; counter < num1+1; counter++) {
		cout << "*";
	}
	cout << endl;


}