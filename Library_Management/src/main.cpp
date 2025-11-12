#include<iostream>
#include "Library.h"
#include "Factory.h"

int main()
{
    Library& lib = Library::getInstance();
    //created a factory.h file to handle the creation book and member list
    lib.addBook(Factory::createBook("C++ Basics", "Bjarne"));
    lib.addBook(Factory::createBook("UML Made Easy", "Fowler"));

    lib.addMember(Factory::createMember("John", 101));
    lib.addMember(Factory::createMember("Tiana", 102));

    int choice;
   do {
    std::cout << "\n1. Show Books"
              << "\n2. Borrow Book"
              << "\n3. Return Book"
              << "\n4. Exit"
              << "\nChoice: ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            lib.showBooks();
            break;
        }

        case 2: {
            int id;
            std::string title;

            std::cout << "Member ID: ";
            std::cin >> id;
            std::cin.ignore();

            std::cout << "Book Title: ";
            std::getline(std::cin, title);

            lib.borrowBook(id, title);
            break;
        }

        case 3: {
            int id;
            std::string title;

            std::cout << "Member ID: ";
            std::cin >> id;
            std::cin.ignore();

            std::cout << "Book Title: ";
            std::getline(std::cin, title);

            lib.returnBook(id, title);
            break;
        }

        case 4:
            std::cout << "Exiting...\n";
            break;

        default:
            std::cout << "Invalid choice! Try again.\n";
            break;
    }

} while (choice != 4);
return 0;
}