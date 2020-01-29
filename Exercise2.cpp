#include<iostream>
#include<random>
#include<time.h>

using namespace std;

void lotteryNumbers(int  loterryTable[], int size);


int main() {
	const int size = 8;
	int lotteryTable[size];
	srand(time(NULL));
	lotteryNumbers(lotteryTable, size);
	
	cout << endl << endl;
	system("pause");
	return 0;
}

void lotteryNumbers(int  lotteryTable[], int size)
{
	// Creating Lottery Number
	for (int counter = 1; counter < size; counter++) {
		lotteryTable[counter] = rand() % 39 + 1;
		cout << lotteryTable[counter] << " ";
	}
}