#pragma once
 #include "Book.h"
 #include "Member.h"
 class Factory {
 public:
 static Book* createBook(const std::string& title, const std::string& author)
 {  return new Book(title, author);  }

 static Member* createMember(const std::string& name, int id) 
 { return new Member(name, id);  }
 };

 /*Its only job is to create objects in one place, instead of scattering new or constructors all over your code.
 You want Books, You want Members, You want the creation logic clean and flexible,
If tomorrow the constructor changes, you only update one place, So the Factory centralizes object creation.*/