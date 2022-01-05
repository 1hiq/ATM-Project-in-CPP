#include <iostream>
using namespace std;

int main(void) {

	int pin;

	do {
		cout << "Please type your PIN: ";
		cin >> pin;
	} while (pin != 123456);
	cout << "\n";

	while (1 != 2) {

		cout << "1. Check balance.\n2. Withdraw money.\n3. Add money.\n4. Quit.\n\n";

		int numOfChoose;
		cout << "Choose from the menu: ";
		cin >> numOfChoose;

    cout << "\n";

		int balance = 0;

    switch(numOfChoose){
      case 1:
      cout << "Your current balance is: " << balance << "$\n\n";
      break;

      case 2:
      			int withdrawAmount;
			cout << "Please type the amount that you want to withdraw: ";
			cin >> withdrawAmount;

			if (withdrawAmount > balance) {
				cout << "This amount is greater than your balance. You have only " << balance << "$.\n\n";
			}
			else {
				int balanceAfterWithdraw = balance - withdrawAmount;
				balance = balanceAfterWithdraw;

				cout << withdrawAmount << "$ has been deducted from your account.\nAnd your current balance become: " << balance << "$\n\n";
			}
      break;

      case 4:
      return 0;
      break;

      default:
      cout << "There is no choose with this number!\n\n";
      break;

      case 3:
      int addAmount;
			cout << "Please type the amount that you want to add: ";
			cin >> addAmount;

			int balanceAfterAdd = balance + addAmount;
			balance = balanceAfterAdd;

			cout << addAmount << "$ has been added to your account.\nAnd your current balance become: " << balance << "$\n\n";
      break;
		}
  
	}



	return 0;
}
