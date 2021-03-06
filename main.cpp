#include <iostream>
#include <LinkedLists.h>

using namespace std;

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
	head->num = 0;
	head->next = one;
	one->initialise(100);
	one->num = 1;
	one->next = two;
	two->initialise(50);
	two->num = 2;
	two->next = tail;
	tail->initialise(0);
	tail->num = 10000;
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
	printAccounts(head);
	cout << "Now we will initialise a third bank account and place it after two and before the tail." << endl;
	bankAccount* three = NULL;
	three = new bankAccount();
	three->initialise(990);
	three->num = 3;
	three->next = tail;
	two->next = three;
	printAccounts(head);
}