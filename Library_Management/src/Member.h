#pragma once
#include <string>
#include <vector>
#include "Book.h"

class Member{
private:
    std::string name;
    int id;
    std::vector<Book*> borrowed;
public:
    Member(const std::string&n, int d);

    void borrowBook(Book* b);
    void returnBook(Book* b);
    void showBorrowedBooks() const;

    int getId() const;
    std::string getName() const;
};

