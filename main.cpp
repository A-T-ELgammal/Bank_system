#include <iostream>
#include "Library.hpp"

int main()
{
    Library lib;
    string bookName = "Oliver Twist";

    lib.addBook(bookName, "Charles Dickens", 1838, 24.99, "Pre-owned");
    lib.getBook(bookName)->displayDetails();

    return 0;
}