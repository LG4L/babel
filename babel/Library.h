#ifndef LIBRARY_H
#define LIBRARY_H

#include "Loan.h"
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
    std::map<User,Loan> loans;  // Liste des emprunts

    Library();
    static Library* instance;

public:

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