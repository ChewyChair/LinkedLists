#pragma once

class bankAccount {
public:
	void initialise(int val) {
		balance = val;
	}
	void transact(int val) {
		if (balance + val < 0) {
			cout << "Invalid transaction. Insufficient funds remaining." << endl;
		}
		else {
			balance += val;
		}
	}
	void printval() {
		cout << "Current value in account is " << balance << endl;
	}
	int num;
	bankAccount* next;
private:
	double balance;
};
