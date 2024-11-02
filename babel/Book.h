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
    Book() = default;
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
    std::string getId();
    std::string toString();
    void addExamplary();
};
#endif


