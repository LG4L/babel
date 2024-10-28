#include "Book.h"


void Book::setTitle(std::string title)
{
    this->title = title;
}

void Book::setAuthor(std::string author)
{
    this->author = author;
}

void Book::setGender(std::string gender)
{
    this->gender = gender;
}

void Book::setExamplary(int examplary)
{
    this->examplary = examplary;
}

void Book::setIssueDate(int issueDate)
{
    this->issueDate = issueDate;
}

std::string Book::getTitle() const
{
    return this->title;
}

std::string Book::getAuthor()
{
    return this->author;
}

std::string Book::getGender()
{
    return this->gender;
}

int Book::getExamplary()
{
    return this->examplary;
}
int Book::getIssueDate()
{
    return this->issueDate;
};

// function to add book
std::string Book::addBook(Book b)
{
    return std::string();
}

std::string Book::getId()
{
    std::string result = 
        this->title + ", " + 
        this->author + ", " + 
        this->gender + ", " + 
        std::to_string(this->issueDate);

    return result;
}

std::string Book::toString()
{
    std::string result = 
        this->title + ", " + 
        this->author + ", " + 
        this->gender + ", " + 
        std::to_string(this->issueDate) + ", " + 
        std::to_string(this->examplary);

    return result;
}

void Book::addExamplary()
{
    this->examplary += 1;
}



// Méthode qui retourne un objet JSON
Json::Value Book::toJson() const {
    Json::Value bookJson;
    bookJson["Title"] = title;          // Titre dans le JSON
    bookJson["Author"] = author;        // Auteur dans le JSON
    bookJson["Gender"] = gender;
    bookJson["Examplary"] = examplary;
    bookJson["IssueDate"] = issueDate;  // Date de publication dans le JSON
    
    return bookJson;
}