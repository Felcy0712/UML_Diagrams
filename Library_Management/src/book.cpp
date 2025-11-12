#include "book.h"

Book::Book(std::string t, std::string a) : title(t), author(a), isBorrowed(false) {}

void Book::borrowBook() {
    isBorrowed = true;
}

void Book::returnBook() {
    isBorrowed = false;
}

bool Book::isBorrowedStatus() const {
    return isBorrowed;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}