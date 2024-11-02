//#include <iostream>
//#include <string>
//#include "Book.h"
//#include "Library.h"
//#include "User.h"

// void searchBook(const std::string& title)
// {
//     std::cout << "Recherche du livre : " << title << std::endl;
// }

// void addBook(const std::string& title)
// {
//     std::cout << "Ajout du livre : " << title << std::endl;
// }

// void removeBook(const std::string& title)
// {
//     std::cout << "Suppression du livre : " << title << std::endl;
// }

// int main(int argc, char* argv[])
// {
//     if (argc < 2)
//     {
//         std::cout << "Utilisation : babel <commande> [arguments]\n";
//         std::cout << "Commandes disponibles : search, add, remove\n";
//         return 1;
//     }

//     std::string command = argv[1];

//     if (command == "search")
//     {
//         if (argc < 3)
//         {
//             std::cout << "Utilisation : babel search <titre>\n";
//             return 1;
//         }
//         searchBook(argv[2]);
//     }
//     else if (command == "add")
//     {
//         if (argc < 3)
//         {
//             std::cout << "Utilisation : babel add <titre>\n";
//             return 1;
//         }
//         addBook(argv[2]);
//     }
//     else if (command == "remove")
//     {
//         if (argc < 3)
//         {
//             std::cout << "Utilisation : babel remove <titre>\n";
//             return 1;
//         }
//         removeBook(argv[2]);
//         }
//     else
//     {
//         std::cout << "Commande inconnue : " << command << "\n";
//         std::cout << "Commandes disponibles : search, add, remove\n";
//     }

//     return 0;
// }
