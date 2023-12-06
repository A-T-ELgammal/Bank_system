#include "Account.hpp"
Account::Account(User *holder, char accountType, int32_t amount) : holder{holder}, accountType{accountType}, amount{amount}
{
    number = rand() % 100;
}

void Account::deposit(int amount)
{
    if (amount > 0)
        this->amount += amount;
    setHistory("deposit amount: " + to_string(amount));
    cout << "deposit: " + to_string(amount) << endl;
}

int Account::getAmount()
{
    setHistory("get balance info");
    return amount;
}

void Account::withdraw(int amount)
{
    if (amount > 0)
        this->amount -= amount;
    setHistory("withdraw amount: " + to_string(amount));
    cout << "withdraw: " + to_string(amount) << endl;
}
void Account::printLog() const
{
    for (string status : history)
    {
        cout << status << endl;
    }
}

void Account::getInfo()
{
    cout << getType(accountType) << " account number: " << number << endl;
    displayUser();
    getAmount();
}

string Account::getType(const char accountType) const
{
    switch (accountType)
    {
    case 'C':
        return "Checking ";
    case 'S':
        return "Saving ";
    case 'D':
        return "CD ";
    default:
        return "not valid type";
    }
}

void Account::displayUser() const
{
    cout << holder->getFirstName() << endl;
    cout << holder->getLastName() << endl;
    cout << holder->getSSN() << endl;
}
