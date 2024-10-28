#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <json/json.h>
#include <fstream>
#include <string>

class Book {
private:
    std::string title;  // Nommage correct pour les membres privés
    std::string author;
    std::string gender;
    int examplary;
    int issueDate;

public:
    // Constructeur avec liste d'initialisation
    Book(const std::string& title, const std::string& author, std::string gender, int examplary, int issueDate)
        : title(title), author(author), gender(gender), examplary(examplary), issueDate(issueDate) {}

    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setGender(std::string gender);
    void setExamplary(int examplary);
    void setIssueDate(int issueDate);
    std::string getTitle();
    std::string getAuthor();
    std::string getGender();
    int getExamplary();
    int getIssueDate();
    Json::Value toJson() const;
};

#endif


//int main() {
//    // Crée un objet Livre (book)
//    Book book1("Le Petit Prince", "Antoine de Saint-Exupéry", "only2:moyai:", 1943, 3);
//
//    // Conversion de l'objet Livre(book) en JSON
//    Json::Value jsonOutput = book1.toJson();
//
//    // Affiche le JSON formaté
//    std::cout << jsonOutput.toStyledString() << std::endl;
//
//
//
//
//
//    std::ofstream file_id;
//    file_id.open("file.txt");
//
//
//
//    Json::StyledWriter styledWriter;
//    file_id << styledWriter.write(jsonOutput);
//
//    file_id.close();
//
//
//    return 0;
//}