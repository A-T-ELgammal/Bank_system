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
    cout << "Balanace: " << newAccount->getAmount() << endl;
    newAccount->deposit(500);
    newAccount->deposit(200);
    newAccount->withdraw(300);
    cout << "Balanace: " << newAccount->getAmount() << endl;
    cib->closeAccount(newUser->getSSN());
    cib->closeAccount(newUser->getSSN());
    cout << "-------account info----------" << endl;
    newAccount->getInfo();
    // cout << "----------History of closed account---------------" << endl;
    newAccount->printLog();

    delete newUser;
    delete newAccount;
    delete cib;
    
    return 0;
}