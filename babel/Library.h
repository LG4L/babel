#ifndef LIBRARY_H
#define LIBRARY_H

#include "User.h"
#include "Book.h"

#include <map>
#include <vector>

typedef std::string id;

class Library {
private:
    std::map<id, Book> books;
    std::map<id, User> mUser;
    std::map<id, std::vector<Book>> emprunt; // string represente l'identifiant utilisateur

    Library();
    static Library* instance;

public:


    // le int représente le code de retour du code
    // exemple : 0 = tout vas bien; 1 = erreur...

    static Library& getInstance();
    void addBook(Book book);
    bool bookExist(Book b);
    bool deleteBook(Book book);
    bool deleteBook(id bookId);

    std::vector<Book> getAllBook();

    Library(const Library&) = delete;
    Library& operator=(const Library&) = delete;
};

#endif