#ifndef USERS_H
#define USERS_H

#include <iostream>
#include <string>
//#include "library.h"

class User {
private:
    std::string name;
    std::string addr;
    std::string phone;
    std::string idUser;

public:

    User(const std::string& initialName, const std::string& initialAddr, const std::string& initialPhone, const std::string& initialId) {

        this->name = initialName;
        this->addr = initialAddr;
        this->phone = initialPhone;
        this->idUser = initialId;
    }

    void setName(const std::string& name);

    void setAddr(const std::string& addr);

    void setPhone(const std::string& phone);

    void setUserId(const std::string& idUser);

    std::string getName();

    std::string getAddr();

    std::string getPhone();

    std::string getId();

};

#endif
//int main()
//{
//    Users users("matthieu", "80 rue des ****", "094675894", "1");
//
//    users.getName();
//
//    std::string recupName;
//    std::cout << "entre ton nom" << std::endl;
//    std::cin >> recupName;
//    std::cin.ignore();
//
//    users.setName(recupName);
//
//    std::cout << users.getName() << std::endl;
//}