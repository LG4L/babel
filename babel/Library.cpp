#include "Library.h"

#include <iostream>

Library::Library(){}

Library& Library::getInstance()
{
    static Library instance;
    return instance;
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

std::vector<Book> Library::getAllBook()
{
    std::vector<Book> allBooks;
    for (auto book : books)
    {
        allBooks.push_back(book.second);
    }

    return allBooks;
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