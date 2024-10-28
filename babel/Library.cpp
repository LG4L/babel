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
    if (this->books.find(bookid) == this->books.end())
    {
        this->books[bookid] = book;
    }
    else
    {
        this->books[bookid].addExamplary();
    }
}

bool Library::borrowBook(std::string userId, std::string bookTitle)
{
    Book book = books[bookTitle];
    emprunt[userId].push_back(book);
    std::cout << "Le livre " << bookTitle << " a ete emprunté par " << userId << std::endl;
}

bool Library::returnBook(const std::string& userId, const std::string& bookTitle) {
    User& user = mUser[userId];
    Book& book = books[bookTitle];
    auto& borrowedBooks = emprunt[userId];
    auto it = std::find_if(borrowedBooks.begin(), borrowedBooks.end(),
        [&bookTitle](const Book& b) { return b.getTitle() == bookTitle; });


    if (it != borrowedBooks.end()) {
        borrowedBooks.erase(it);
        book.setExamplary(book.getExamplary() + 1);
        std::cout << "Le livre " << bookTitle << " a ete retourné par " << userId << std::endl;
        return true;
    }
    else {
        std::cout << "L'utilisateur n'a pas emprunté ce livre" << std::endl;
        return false;
    }
}