#include <iostream>
#include "Bank.hpp"

int main()
{

    User *newUser = new User{"Ahmed", "Taha", 3328879876};
    Account *newAccount = new Account{
        newUser,
        'C',
        1000};

    Bank *cib = new Bank();
    cib->openAccount(newAccount);
    cout << newAccount->getAmount() << endl;
    newAccount->deposit(500);
    newAccount->deposit(200);
    newAccount->withdraw(300);
    cout << newAccount->getAmount() << endl;
    newAccount->printLog();
    newAccount->getInfo();
    delete newUser;
    delete newAccount;
    delete cib;
    cib->closeAccount(newAccount->getNUmber());
    return 0;
}