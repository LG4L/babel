#include "Library.h"
#include <iostream>
#include "User.h"

int main() {
    Library& singleton = Library::getInstance();

    singleton.someOperation();

    User user("matthieu", "80 rue des penis", "095404949", "U123");

    std::cout << "Name: " << user.getName() << std::endl;
    std::cout << "Address: " << user.getAddr() << std::endl;
    std::cout << "Phone: " << user.getPhone() << std::endl;
    std::cout << "User ID: " << user.getId() << std::endl;

    return 0;
}