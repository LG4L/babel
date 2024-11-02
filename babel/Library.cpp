#include "Library.h"

#include <iostream>

Library::Library()
{
    std::cout << "Singleton instance created" << std::endl;
}

Library& Library::getInstance()
{
    static Library instance;
    return instance;
}

void Library::someOperation()
{
    std::cout << "Singleton is performing an operation" << std::endl;
}

void Library::addBook(Book book)
{
    std::string bookid = book.getId();
    if (books.find(bookid) == books.end())
    {
        books[bookid] = book;
    }
    else
    {
        books[bookid].addExamplary();
    }
}

bool Library::bookExist(Book b) {
    id id_book = b.getId();
    if (books.find(id_book) == books.end()) {
        return false;
    }
    return true;
}