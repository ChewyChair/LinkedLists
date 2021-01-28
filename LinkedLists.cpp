#include <iostream>
#include <LinkedLists.h>

using namespace std;

void printAccounts(bankAccount* acct) {
	cout << "Current bank account numbers: ";
	while (acct != NULL) {
		cout << acct->num << " ";
		cout << endl;
		acct = acct->next;
	}
}

