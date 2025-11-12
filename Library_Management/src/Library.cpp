#include "Library.h"
 #include <iostream>

 Library& Library::getInstance() {//Singleton instance //this is called in main to create the instance of an obj
 static Library instance;
 return instance;
 }
void Library::addBook(Book* b) { books.push_back(b); }//books vdata member in library

void Library::addMember(Member* m) { members.push_back(m); } //members data mem in library

//Find the book in the books vector
 Book* Library::findBook(const std::string& title) {
 for (auto b : books) if (b->getTitle() == title) return b;
 return nullptr;
 }

 //find member
 Member* Library::findMember(int id) {
 for (auto m : members) if (m->getId() == id) return m;
 return nullptr;
 }

 //borrow book
 void Library::borrowBook(int memberId, const std::string& title) {
    Member* m = findMember(memberId);
    Book* b = findBook(title);
    if (!m || !b) {
        std::cout << "Member or Book not found!";
        return;
    }
    m->borrowBook(b);
 }

 //return book
 void Library::returnBook(int memberId, const std::string& title) {
    Member* m = findMember(memberId);
    Book* b = findBook(title);
    if (!m || !b) {
        std::cout << "Member or Book not found!";
    return;
    }
    m->returnBook(b);
}

//show book 
void Library::showBooks() const {
 if (books.empty()) {
     std::cout << "No books in library. ";
    return;
 }
 for (auto b : books) {
 std::cout << "- " << b->getTitle() << " by " << b->getAuthor();
 if (b->isBorrowedStatus()) std::cout << " (Borrowed)";
  }
}