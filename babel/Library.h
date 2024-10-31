#ifndef LIBRARY_H
#define LIBRARY_H

#include "User.h"
#include "Book.h"

#include <map>
#include <vector>
#include "Book.h"

class Library
{
private:
    std::map<std::string, Book> books;
    std::map<std::string, User> mUser;
    std::map<std::string, std::vector<Book>> emprunt; // string represente l'identifiant utilisateur

    Library();
    static Library* instance;

public:
    static Library& getInstance();
    void someOperation();
    void Addbook(Book book);


    Library(const Library&) = delete;
    Library& operator=(const Library&) = delete;
};

#endif
