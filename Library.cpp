#include "Library.hpp"

void Library::addBook(const string name, const string author, const int yob, const float price, const string status)
{
    Book *newBook = new Book{name, author, yob, price, status};
    books->push_back(newBook);
}

Library::~Library()
{
    for (Book *book : *books)
        delete book;

    delete books;
    books = nullptr;
}