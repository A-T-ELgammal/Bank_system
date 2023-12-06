#ifndef USER_H
#define USER_H
#include <iostream>

using namespace std;

class User
{
public:
    User(const string firstName, const string lastName, const uint32_t ssn) : firstName{firstName}, lastName{lastName}, ssn{ssn} {};
    string getFirstName() { return firstName; }
    string getLastName() { return lastName; }
    uint32_t getSSN() { return ssn; }
    
private:
    string firstName;
    string lastName;
    uint32_t ssn;
};

#endif