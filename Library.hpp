#ifndef LIBRARY
#define LIBRARY

#include <vector>
#include "Book.hpp"

struct Book
{
public:
    // Constructors
    Book(const string name, const string author, const int yob, const float price, const string status) : name{name}, author{author}, yob{yob}, price{price}, status{status} {};

    // Methods
    void displayDetails()
    {
    }

private:
    int id;
    string name;
    string author;
    int yob;
    float price;
    string status;
};

class Library
{
public:
    // Constructors
    Library() {}
    ~Library();

    // Methods
    void addBook(const string name, const string author, const int yob, const float price, const string status);
    void deleteBook();
    Book getBook()
    {
    }

private:
    vector<Book *> *books;
};

#endif