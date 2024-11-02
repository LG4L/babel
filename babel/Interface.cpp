#include "Interface.h"
#include "Book.h"
#include "Library.h"

int interface::addBook()
{
    std::string title;
    std::string author;
    std::string gender;
    int issuedate;
    int examplary = 3;
    std::string issuedatetemp;

    std::cout << "titre: ";
    std::getline(std::cin, title);

    std::cout << "autheur: ";
    std::getline(std::cin, author);

    std::cout << "Le genre: ";
    std::getline(std::cin, gender);

    std::cout << "la date de sortie: ";
    std::getline(std::cin, issuedatetemp);

    try
    {
        issuedate = std::stoi(issuedatetemp);
    }
    catch (const std::invalid_argument& e)
    {
        std::cerr << "entre invalid" << std::endl;
    }
    Book c(title, author, gender, examplary, issuedate);
    Library::getInstance().Addbook(c);
    return 0;
}