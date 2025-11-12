#include<iostream>
#include<vector>
 #include "Book.h"
 #include "Member.h"
class Library{
private:
    std::vector<Book*> books;
    std::vector<Member*> members;

    Library(){} //Singleton private constructor

public:
static Library& getInstance();

void addBook(Book* b);
void addMember(Member* m);

Book* findBook(const std::string& title);
Member* findMember(int id);

void borrowBook(int memberId, const std::string& title);
void returnBook(int memberId, const std::string& title);
void showBooks() const;
};