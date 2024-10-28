#ifndef LIBRARY_H
#define LIBRARY_H

#include <map>
#include "User.h"
#include "Book.h"
#include <vector>

class Library {
private:
    std::map<std::string, Book> books;
    std::map<std::string, User> mUser;
    std::map<User, std::vector<Book>> emprunt;

    Library();
    static Library* instance;

public:
    static Library& getInstance();
    void someOperation();


    Library(const Library&) = delete;
    Library& operator=(const Library&) = delete;
};

#endif