#include <iostream>

using namespace std;

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
	bankAccount* next;
private:
	double balance;
};

int main() {
	bankAccount* head = NULL;
	bankAccount* one = NULL;
	bankAccount* two = NULL;
	bankAccount* tail = NULL;
	head = new bankAccount();
	one = new bankAccount();
	two = new bankAccount();
	tail = new bankAccount();
	head->initialise(0);
	head->next = one;
	one->initialise(100);
	one->next = two;
	two->initialise(50);
	two->next = tail;
	tail->initialise(0);
	tail->next = NULL;
	cout << "All accounts initialised. Checking balance of account one: " << endl;
	one->printval();
	/*cout << "Now we add $50 via one.balance += 50 and check the balance." << endl;
	one->balance += 50;
	one->printval();*/
	//the above comment will throw an error because balance is private.
	cout << "Now we add $50 through the public transact() function." << endl;
	one->transact(50);
	one->printval();
}