#include "Library.h"
#include "User.h"
#include "Book.h"
#include <iostream>

void interface()
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
	
	switch (choix)
    {
	case 1:
	    std::cout << "Ajouter un livre selectionner" << std::endl;
		std::string title;
		std::cin >> title;
		std::cout << "Quel et l'autheur de ce titre?" << std::endl;
		std::string author;
		std::cin >> author;
		std::cout << "Le genre ?" << std::endl;
        std::string gender;
		std::cin >> gender;
		std::cout << "la date de sortie" << std::endl;
		int issuedate;
		std::cin >> issuedate;
		// la faut un "if" savoir si il existe déjà si il existe déjà faut faire +1 sinon l'ajouté
		
		Library::getInstance().addBook(title, author, gender, issuedate);
	    break;
	case 2:
	    std::cout << "Ajouter un livre selectionner" << std::endl;
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
