#include <string>

// faite pas chié je l'ai appelée .h pour l'appelée dans library.
// comme on appele pas un .cpp de mémoire

class Loan
{
    std::string bookId;       // Identifiant du livre
    std::string userId;       // Identifiant de l'utilisateur
    std::string borrowDate;   // Date d'emprunt
    std::string dueDate;      // Date de retour

public:
    Loan(const std::string& bookId, const std::string& userId, const std::string& borrowDate, const std::string& dueDate)
        : bookId(bookId), userId(userId), borrowDate(borrowDate), dueDate(dueDate) {}
    // method ( je crois ?) pour recupéré les information neccesaire a la "creation" d'un emprunt
};


//#include <string>
//#include <ctime>
//
//
//std::string getCurrentDate()
// {
//    std::time_t now = std::time(nullptr);
//    return std::ctime(&now); // Renvoie la date actuel en string
//}



//std::string calculateDueDate(int daysToAdd = 14)
// {
//    std::time_t now = std::time(nullptr);
//    std::time_t dueTime = now + (daysToAdd * 24 * 60 * 60);
//    return std::ctime(&dueTime); // Renvoie la date de retour prévue
//}