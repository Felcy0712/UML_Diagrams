 #include "Member.h"
 #include <iostream>

 Member::Member(const std::string& n, int id) : name(n), id(id) {} //para constructor

 //Borrow Book by the member
 void Member::borrowBook(Book* b) {
    if (b->isBorrowedStatus()) {
    std::cout << "Book already borrowed!";
        return; }
    borrowed.push_back(b);//borrowed is the data member of member the vetor is getting updated
    b->borrowBook();//calling book method using book object b
 }

 //Return Book

 void Member::returnBook(Book* b) {
    for (auto it = borrowed.begin(); it != borrowed.end(); ++it) {//borrowed vector list is traversing
        if (*it == b) {
        borrowed.erase(it);
        b->returnBook();
        return;
        }
    }
    std::cout << "This book was not borrowed by this member.";
 }

 //show book
  void Member::showBorrowedBooks() const {
    if (borrowed.empty()) {//checking the borrowed vector is empty
    std::cout << "No borrowed books.";
    return;
 }
    std::cout << "Borrowed Books:";
    for (auto b : borrowed) {
    std::cout << "- " << b->getTitle() << " by " << b->getAuthor() << "3";
}
  }

int Member::getId() const { return id; }

std::string Member::getName() const { return name; }
