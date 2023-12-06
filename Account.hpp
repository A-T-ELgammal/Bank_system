#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <vector>
#include <iostream>
#include "User.hpp"

using namespace std;

class Account
{
public:
    Account() : holder{new User()}, number{0}, accountType{'C'}, amount{0}, history(vector<string>(0)){};
    Account(User *holder, char accountType, int32_t amount);
    uint32_t getNumber() { return number; }
    void deposit(int amount);
    int getAmount();
    void withdraw(int amount);
    void setHistory(string status)
    {
        history.push_back(status);
    }
    void printLog() const;
    void getInfo();
    string getType(const char accountType) const;
    void displayUser() const;
    User getHolder() { return *holder; }

private:
    int number;
    User *holder;
    char accountType;
    int32_t amount;
    vector<string> history;
};

#endif
