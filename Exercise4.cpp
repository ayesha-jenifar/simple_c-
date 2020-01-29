#include<iostream>
#include<string>

using namespace std;

int main() {

	const unsigned int Max_Num = 20;
	string name[Max_Num];
	string number[Max_Num];
	string existName;
	int choice, counter = 0;

	cout << "Please Select 1 to add new contact \nPlease Select 2 to get a contact info \nPlease Select 3 to exit" << endl;
	cout << "Your Selection: ";
	cin >> choice;

	cout << "You have choosen: " << choice << endl;

	cout << endl << endl;

	while (choice != 3) {

		if (choice == 1) {
			cout << " Name: ";
			cin >> name[counter];
			cout << " Number: ";
			cin >> number[counter];
			counter++;
		}

		else if(choice == 2) {
			cout << " Enter name: ";
			cin >> existName;
			for (int j = 0; j < Max_Num; j++) {
				if (existName == name[j]) {
					cout << "The Number: " << number[j] << endl;
				}
			}
		}
		
		else if(choice == 3) {
			cout << "Ending the Program" << endl;
		}

		else {
			cout << "Please Select 1-3" << endl;
		}


		cout << endl << endl;
		cout << "Please Select 1 to add new contact \nPlease Select 2 to get a contact info \nPlease Select 3 to exit" << endl;
		cout << "Your Selection: ";
		cin >> choice;

		cout << "You have choosen: " << choice << endl;
		
	}

	cout << endl << endl;
	system("pause");
	return 0;
}