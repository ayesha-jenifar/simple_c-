#include<iostream>
using namespace std;


int main() {

	int exam_score[10], total = 0;
	float average;

	
	// Taking Exam Scores
	for (int counter = 1; counter < 11; counter++) {
		cout << "Please enter the score " << counter << ":";
		cin >> exam_score[counter];
		total = exam_score[counter] + total;
	}
	
	average = total / 10.00;

	// Printing Scores
	for (int counter = 2; counter < 11; counter++) {
		cout << exam_score[counter] << " ";
	}
	
	cout << endl << endl;
	cout << "The total score is:" << total <<endl;
	cout << "The average score is:" << average << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}


