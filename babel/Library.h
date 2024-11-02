#ifndef LIBRARY_H
#define LIBRARY_H

#include "User.h"
#include "Book.h"

#include <map>
#include <vector>

class Library {
private:
    std::map<std::string, Book> books;
    std::map<std::string, User> mUser;
    std::map<std::string, std::vector<Book>> emprunt; // string represente l'identifiant utilisateur

    Library();
    static Library* instance;

public:


    // le int représente le code de retour du code
    // exemple : 0 = tout vas bien; 1 = erreur...

    int addBook(Book b);
    static Library& getInstance();
    void someOperation();
    void Addbook(Book book);


    Library(const Library&) = delete;
    Library& operator=(const Library&) = delete;
};

#endif
