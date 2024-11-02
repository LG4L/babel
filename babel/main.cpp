 #include "Library.h"
 #include "User.h"
 #include "Book.h"

 #include <iostream>


void addbook()
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
    return;
}

 void main()
 {
 	int choix;
 	std::cout << "Bienvenue dans la bibliothèque digital" << std::endl;
 	std::cout << "1. Ajouter un livre" << std::endl;
 	std::cout << "2. Supprimer un livre" << std::endl;
 	std::cout << "3. Rechercher un livre" << std::endl;
 	std::cout << "4. Emprunter un livre" << std::endl;
 	std::cout << "5. Retourner un livre" << std::endl;
 	std::cout << "6. Quitter" << std::endl;
 	std::cin >> choix;
    std::cin.ignore();

 	switch (choix)
     {
 	case 1:
        addbook();
 	    break;
 	case 2:
 	    std::cout << "selectionné le livre a supprimer" << std::endl;
 	    break;
 	case 3:
 	    std::cout << "Ajouter un livre selectionner" << std::endl;
 	    break;
 	case 4:
 	    std::cout << "Ajouter un livre selectionner" << std::endl;
 	    break;
 	case 5:
 	    std::cout << "Ajouter un livre selectionner" << std::endl;
 	    break;
 	case 6:
 	    std::cout << "Ajouter un livre selectionner" << std::endl;
 	    break;
 	}
 }