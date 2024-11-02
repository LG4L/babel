#include "Library.h"
#include "User.h"
#include "Book.h"
#include "Interface.h"

#include <iostream>


void main()
{
    Book livre1 = Book("Le Petit Prince", "Antoine de Saint-Exupery", "action", 0, 1943);
    Book livre2 = Book("les trois mousketer", "Saint jose", "action", 0, 1965);

    Library::getInstance().addBook(livre1);
    Library::getInstance().addBook(livre2);


    while(true) {
        std::string choix_str;
        std::cout << "Bienvenue dans la bibliothèque digital" << std::endl;
        std::cout << "0. Afficher tout les livres" << std::endl;
        std::cout << "1. Ajouter un livre" << std::endl;
        std::cout << "2. Supprimer un livre" << std::endl;
        std::cout << "3. Rechercher un livre" << std::endl;
        std::cout << "4. Emprunter un livre" << std::endl;
        std::cout << "5. Retourner un livre" << std::endl;
        std::cout << "6. Quitter" << std::endl;
        std::getline(std::cin, choix_str);
        
        int choix;
        try
        {
            choix = std::stoi(choix_str);
        }
        catch (const std::invalid_argument& e)
        {
            std::cerr << "entree invalid, veuillez spécifier un numéro" << std::endl;
			continue;
        }
        if(choix > 6 || choix < 0)
        {
			std::cout << "entree invalid, veuillez spécifier un numéro valide" << std::endl;
			continue;
		}

 	    switch (choix)
        {
        case 0:
            interface::getAllBook();
            break;
 	    case 1:
            interface::addBook();
 	        break;
 	    case 2:
 	        std::cout << "selectionné le livre a supprimer" << std::endl;
            interface::deleteBook();
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
 }
