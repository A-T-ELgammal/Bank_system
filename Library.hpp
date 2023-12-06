#ifndef LIBRARY
#define LIBRARY

#include <iostream>
#include <vector>

using namespace std;

class Library;

struct Book
{
public:
    // Constructors
    Book(const string name, const string author, const int yob, const float price, const string status) : name{name}, author{author}, yob{yob}, price{price}, status{status} {};

    // Methods
    void displayDetails()
    {
        cout << "=========== " << name << "===========" << '\n'
             << "Author: " << author << '\n'
             << "Price: " << price << '\n'
             << "Year of Publishing: " << yob << '\n'
             << "Status: " << status;
    }

private:
    int id;
    string name;
    string author;
    int yob;
    float price;
    string status;
    friend class Library;
};

class Library
{
public:
    // Constructors
    Library() : books{new vector<Book *>()}, emptyBook{new Book{"", "", 0, 0, ""}} {};
    ~Library();

    // Methods
    void addBook(const string name, const string author, const int yob, const float price, const string status);
    void deleteBook(const int id);
    Book *getBook(const string name);

private:
    vector<Book *> *books;
    Book *emptyBook;
};

#endif