#include "Bank.hpp"
#include <iostream>

void Bank::openAccount(Account *newAccount)
{
    accounts.push_back(*newAccount);
    newAccount->setHistory("created account");
    std::cout << "account opened" << std::endl;
}

void Bank::closeAccount(const int32_t ssn)
{
    cout << "account closed" << endl;
    getAccount(ssn).setHistory("closed account");
}

vector<Account> Bank::getAccounts() const
{
    return accounts;
}

Account Bank::getAccount(const int32_t ssn) const
{

    for (Account account : accounts)
    {
        if (account.getHolder().getSSN() == ssn)
            return account;
    }
    return Account ;
}
