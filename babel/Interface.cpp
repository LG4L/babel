#include "Interface.h"
#include "Book.h"
#include "Library.h"

void interface::getAllBook() {
    std::vector<Book> liste_livre = Library::getInstance().getAllBook();

    for(auto& livre : liste_livre) {
        std::cout << livre.toString() << std::endl;
        std::cout << livre.getId() << std::endl;
    }
    return;
}


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
    Library::getInstance().addBook(c);
    return 0;
}
void interface::deleteBook()
{
    std::string deleteby;
    std::cout << "veux tu supprimé un livre par son id ou autre";
    std::getline(std::cin, deleteby);
    
    if (deleteby == "1")
    {
        std::string specifiedId;
        std::cout << "specifier l'id: ";
        std::getline(std::cin, specifiedId);
        Library::getInstance().deleteBook(specifiedId);
    }
    else if (deleteby == "2")
    {
        std::string title;
        std::string author;
        std::string gender;
        int issuedate;
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
        Book avc(title, author, gender, 0, issuedate);
        Library::getInstance().deleteBook(avc);
    }
}