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
    std::string bookId = book.getId();
    if (books.find(bookId) == books.end())
    {
        books[bookId] = book;
    }
    else
    {
        books[bookId].addExamplary();
    }
}
bool Library::deleteBook(Book book)
{
    std::string bookId = book.getId();
    if (books.find(bookId) != books.end())
    {
        books.erase(bookId);
        return true;
    }
    return false;
}
bool Library::deleteBook(id bookId)
{
    if (books.find(bookId) != books.end())
    {
        books.erase(bookId);
        return true;
    }
    return false;
}

bool Library::bookExist(Book b)
{
    id bookId = b.getId();
    if (books.find(bookId) == books.end())
    {
        return false;
    }
    return true;
}