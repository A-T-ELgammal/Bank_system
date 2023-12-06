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
    Account &target = getAccount(ssn);

    if (!target.getNumber())
        return;

    target.setHistory("closed account #" + to_string(target.getNumber()));
    cout << "account closed" << endl;
}

vector<Account> Bank::getAccounts() const
{
    return accounts;
}

Account &Bank::getAccount(const uint32_t ssn)
{
    for (Account &account : accounts)
        if (account.getHolder().getSSN() == ssn)
            return account;

    return accounts.front();
}
