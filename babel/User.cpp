#include "User.h"

void User::setName(const std::string& name)
{
    this->name = name;
}

void User::setAddr(const std::string& addr)
{
    this->addr = addr;
}

void User::setPhone(const std::string& phone)
{
    this->phone = phone;
}

void User::setUserId(const std::string& idUser)
{
    this->idUser = idUser;
}

std::string User::getName()
{
    return this->name;
}

std::string User::getAddr()
{
    return this->addr;
}

std::string User::getPhone()
{
    return this->phone;
}

std::string User::getId()
{
    return this->idUser;
}