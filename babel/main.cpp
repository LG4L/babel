#include "Library.h"
#include "User.h"
#include "Book.h"
#include "Interface.h"

#include <iostream>


 void main()
 {
     Book livre1("Le Petit Prince", "Antoine de Saint-Exupéry", 1943);
     Book livre2("les troas mousketer", "Saint josé", 1965);

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