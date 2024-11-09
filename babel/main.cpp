#include "Library.h"
#include "User.h"
#include "Book.h"
#include "Interface.h"

#include <iostream>
#include <string>

int main()
{
    // Initialisation des livres
    Book livre1("Le Petit Prince", "Antoine de Saint-Exupery", "action", 0, 1943);
    Book livre2("Les Trois Mousquetaires", "Alexandre Dumas", "action", 0, 1965);

    Library::getInstance().addBook(livre1);
    Library::getInstance().addBook(livre2);

    // Boucle principale du programme
    while (true)
    {

        std::string choix_str;
        std::cout << "Bienvenue dans la bibliotheque digitale" << std::endl;
        std::cout << "Veuillez entrer un numero correspondant a une fonction" << std::endl;
        std::cout << "0. Afficher tous les livres" << std::endl;
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
            std::cerr << "Entree invalide, veuillez specifier un numero." << std::endl;
            continue;
        }

        if (choix < 0 || choix > 6)
        {
            std::cout << "Entree invalide, veuillez specifier un numero valide." << std::endl;
            continue;
        }

        switch (choix) {
        case 0:
            interface::getAllBook();
            break;
        case 1:
            interface::addBook();
            break;
        case 2:
            std::cout << "Selectionnez le livre a supprimer." << std::endl;
            interface::deleteBook();
            break;
        case 3:
            std::cout << "Rechercher un livre." << std::endl;
            // Appeler la fonction de recherche ici
            break;
        case 4:
            std::cout << "Emprunter un livre." << std::endl;
            // Appeler la fonction d'emprunt ici
            break;
        case 5:
            std::cout << "Retourner un livre." << std::endl;
            // Appeler la fonction de retour ici
            break;
        case 6:
            std::cout << "Quitter l'application. A bientot !" << std::endl;
            return 0;
        }
    }
}
