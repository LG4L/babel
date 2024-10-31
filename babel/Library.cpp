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

void Library::Addbook(Book book)
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

//void Library::addUser(int id, const User& user) {
//    mUser[id] = user;
//    std::cout << "User added with this id : " << id << std::endl;
//}
//
//User Library::getUsezr(int id) {
//    if (mUser.find(id) != mUsers.end() {
//        return mUser[id];
//    }
//    else {
//
//    }
//}
