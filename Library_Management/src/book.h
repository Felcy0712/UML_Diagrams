#pragma once
#include <iostream>
#include <string>

class Book{
    private:
    std::string title, author;
    bool isBorrowed;

    public:
    //param construct
    Book(std::string t, std::string a);
    void borrowBook();
    void returnBook();
    bool isBorrowedStatus() const;
    std::string getTitle() const;
    std::string getAuthor() const;
};
