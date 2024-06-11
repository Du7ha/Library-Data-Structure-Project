#include "library.h"
#include <iostream>
using namespace std;
#include <string>


// Constructor: Initialize an empty library
Library::Library(){
    head = NULL;
}

void Library::books() {
    // Create a new node
    Node* newNode1 = new Node;
    newNode1->book.title = "ESP";
    newNode1->book.author = "ahmed khalid tawfik";
    newNode1->book.is_borrow = false;
    newNode1->next = NULL;

    // Insert at the beginning of the linked list because at the end is more complix
    newNode1->next = head;
    head = newNode1;
    
    //=========================================================

    // Create a new node
    Node* newNode2 = new Node;
    newNode2->book.title = "utopia ";
    newNode2->book.author = "ahmed khalid tawfik";
    newNode2->book.is_borrow = false;
    newNode2->next = NULL;

    // Insert at the beginning of the linked list because at the end is more complix
    newNode2->next = head;
    head = newNode2;

    //=========================================================

    // Create a new node
    Node* newNode3 = new Node;
    newNode3->book.title = "night";
    newNode3->book.author = "elie wiesel";
    newNode3->book.is_borrow = false;
    newNode3->next = NULL;

    // Insert at the beginning of the linked list because at the end is more complix
    newNode3->next = head;
    head = newNode3;

    //=========================================================

    // Create a new node
    Node* newNode4 = new Node;
    newNode4->book.title = "watchmen";
    newNode4->book.author = "alan moore ";
    newNode4->book.is_borrow = false;
    newNode4->next = NULL;

    // Insert at the beginning of the linked list because at the end is more complix
    newNode4->next = head;
    head = newNode4;

    //=========================================================

    // Create a new node
    Node* newNode5 = new Node;
    newNode5->book.title = "away";
    newNode5->book.author = "amy bloom";
    newNode5->book.is_borrow = false;
    newNode5->next = NULL;

    // Insert at the beginning of the linked list because at the end is more complix
    newNode5->next = head;
    head = newNode5;
}

// Add a book to the library
void Library::addBook(string& title,string& author) {
    // Create a new node
    Node* newNode = new Node;
    newNode->book.title = title;
    newNode->book.author = author;
    newNode->book.is_borrow = false;
    newNode->next = NULL;

    // Insert at the beginning of the linked list because at the end is more complix
    newNode->next = head;
    head = newNode;
}

// Find a book by title
bool Library::findBookByTitle(string& title) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->book.title == title && temp->book.is_borrow == false) {
            return true; // Book found
        }
        temp = temp->next;
    }
    return false; // Book not found
}

// Find a book by author
void Library::findBookByAuthor(string& author) {
    Node* temp = head;
    int flag = 0;
    while (temp != NULL) {
        if (temp->book.author == author) {
            cout <<"Title : " << temp->book.title << endl;
            cout << "Author : " << temp->book.author << endl;
            if (temp->book.is_borrow == false) {
                cout << "State : available" << endl;
            }
            else {
                cout << "State : Not available now" << endl;
            }
            flag = 1;
            cout << "\n\n";
        }
        temp = temp->next;
    }
    if (flag == 0) {
        cout << "There are no books by this author\n";
    }

}

// Borrow a book if found
bool Library::borrowBook(string& title) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->book.title == title && temp->book.is_borrow == false) {
            temp->book.is_borrow = true;
            return true; // Book available
        }
        temp = temp->next;
    }
    return false; // Book not available
}

// Return a book to a library
void Library::returnBook(string& title) {
    Node* temp = head;
    int flag = 0;
    while (temp != NULL) {
        if (temp->book.title == title && temp->book.is_borrow == true) {
            temp->book.is_borrow = false;
            flag = 1;
        }
        temp = temp->next;
    }  
    if (flag == 1) {
        cout << "Done, Thank you\n";
    }
    else {
        cout << "Something went wrong\n";
    }
}

//num of available books in library
int Library :: count() {
    Node* temp = head;
    int c = 0;
    while (temp != NULL) {
        if (temp->book.is_borrow == false) {
            c++;
        }
        temp = temp->next;
    }
    return c;
}

//display available and not available books
void Library::display_books() {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Title : " << temp->book.title << endl;
        cout << "Author : " << temp->book.author << endl;
        if (temp->book.is_borrow == false) {
            cout << "State : available" << endl;
        }
        else {
            cout << "State : Not available now" << endl;
        }
        cout << "\n\n";
        temp = temp->next;
    }
}


