#ifndef BANK_H
#define BANK_H
#include <vector>
#include <iostream>
#include <string>
#include "Account.hpp"

using namespace std;

class Bank
{
public:
    Bank() { accounts.push_back(*new Account()); }
    vector<Account> getAccounts() const;
    Account &getAccount(const uint32_t ssn);
    void openAccount(Account *account);
    void closeAccount(const int32_t ssn);

private:
    vector<Account> accounts;
};

#endif