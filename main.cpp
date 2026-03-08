#include <iostream>
#include <cstdlib>
#include<ctime>
 
using namespace std;

int main() {
	int randomNumber, guess;

	srand(time(0));
	randomNumber = rand() % 100 + 1;

	cout << "======   Random Guess Game   ======" << endl;
	do {

		cout << "Enter your guess number (1-100):" << endl;
		cin >> guess;
		if (guess > randomNumber) {
			cout << "Too high !!" << endl;

		}
		else if (guess < randomNumber) {
			cout << "Too low !!" << endl;

		}
		else {

			cout << "You guessed the number " << endl;
		}
	} while (guess != randomNumber);

	return 0;

}