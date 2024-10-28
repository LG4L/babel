#include <iostream>
#include "Library.h"

Library* Library::instance = nullptr;

Library::Library() {
    std::cout << "Singleton instance created" << std::endl;
}

Library::~Library() {
    std::cout << "Singleton instance destroyed" << std::endl;
}

Library& Library::getInstance() {
    if (!instance) {
        instance = new Library();
    }
    return *instance;
}



void Library::someOperation() {
    std::cout << "Singleton is performing an operation" << std::endl;
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