#include "Library.hpp"

#include <iostream>

using namespace std;

Library::~Library()
{
    for (Book *book : *books)
        delete book;

    delete books;
    books = nullptr;
    delete emptyBook;
    emptyBook = nullptr;
}

void Library::addBook(const string name, const string author, const int yob, const float price, const string status)
{
    Book *newBook = new Book{name, author, yob, price, status};
    newBook->id = rand() % 100; 
    books->push_back(newBook);
}

void Library::deleteBook(const string name)
{
    for (int i = 0; i < books->size(); i++)
        if ((*books)[i]->name == name)
            books->erase(books->begin() + i);
}

Book *Library::getBook(const string name)
{
    for (Book *book : *books)
        if (book->name == name)
            return book;
    return emptyBook;
}