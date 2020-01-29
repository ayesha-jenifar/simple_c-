#include<iostream>
using namespace std;


int main() {

	const int size = 6;
	int dart_score[size];
	int maximum_score = 0;


	// Taking Exam Scores
	for (int counter = 1; counter < size; counter++) {
		cout << "Please enter the score " << counter << ":";
		cin >> dart_score[counter];
	}

	// Printing Scores
	for (int counter = 1; counter < size; counter++) {
		cout << dart_score[counter] << " ";
		if (dart_score[counter] > maximum_score) {
			maximum_score = dart_score[counter];
		}
	}
	cout << endl << endl;
	cout << maximum_score << " ";
	cout << endl << endl;
	system("pause");
	return 0;
}


