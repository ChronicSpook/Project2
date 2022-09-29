#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int getInteger(int lowerbound, int upperbound);
string integerAsWords(int convertMe);

int main() {
	int aNumber = 0;
	int minimum = 1, maximum = 10;
	cout << "Enter a number: ";
	aNumber = getInteger(minimum, maximum);
	cout << "You entered: " << aNumber << endl;
	cout << integerAsWords(aNumber);
	return 0;
}
int getInteger(int lowerbound, int upperbound) {
	int anInteger = 0;
	do {
		cin >> anInteger;
		// todo: error check that this is an integer
		// provide a prompt if they have to try again
	} while (anInteger < lowerbound || anInteger > upperbound);
	return anInteger;
}
string integerAsWords(int convertMe) {
	string theWords;
	switch (convertMe) {
	case 1:
		theWords = "one"; break;
	case 2:
		theWords = "two"; break;
	default:
		theWords = "I don't know yet.";
		}
	return "one";
}