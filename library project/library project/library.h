#pragma once
#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>

struct Book {
    std::string title;
    std::string author;
    bool is_borrow = false;
};

class Library {
private:
    struct Node {
        Book book;
        Node* next;
    };

    Node* head; // Head of the linked list

public:
    Library();
    void books();
    void addBook(std::string& title, std::string& author);
    bool findBookByTitle(std::string& title);
    void findBookByAuthor(std::string& author);
    bool borrowBook(std::string& title);
    void returnBook(std::string& title);
    int  count();
    void display_books();
};



#endif // LIBRARY_H


