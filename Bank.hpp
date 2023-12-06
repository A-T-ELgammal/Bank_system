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
    vector<Account> getAccounts() const;
    Account getAccount(const int32_t ssn) const;
    void openAccount(Account *account);
    void closeAccount(const int accountNumber);

private:
    vector<Account> accounts;
};

#endif