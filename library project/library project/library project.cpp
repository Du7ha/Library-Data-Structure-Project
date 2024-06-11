#include <iostream>
#include "library.h"
using namespace std;

int main()
{
    Library l1;
    l1.books();// Initialize the library
    cout << "***Welcome to the library***" << endl;
    int num;
    while (true) {
        cout << "*************************\n";
        cout << "1-Add a book to the library\n";
        cout << "2-Find Book By Title\n";
        cout << "3-Find Book By Author\n";
        cout << "4-Borrow Book\n";
        cout << "5-Return Book\n";
        cout << "6-Num of available books in library\n";
        cout << "7-Display available and not available books\n";
        cout << "0-Exit\n";
        cout << "*************************\n";
        cout << "Type the action number you want : ";
        cin >> num;
        if (num==0) {
            cout << "<<<<<<Thank you see you again>>>>>>\n";
            break;
        }
        else if (num == 1) {
            //This condition is used to add a new book to the library

            string title, author;
            cout << "Enter the book title : \n";
            cin.ignore(); // Clear the input buffer
            getline(cin, title);
            cout << endl;
            cout << "Enter the book author : \n";
            getline(cin, author);
            l1.addBook(title, author);
        }
        else if (num == 2) {
            //This condition is used to search for a book using its title

            string title;
            cout << "Enter The book title : \n";
            cin.ignore(); // Clear the input buffer
            getline(cin, title);
            if (l1.findBookByTitle(title)) {
                cout << "The book exists.\n";
            }
            else {
                cout << "Unfortunately, the book is not available\n";
            }
        }
        else if (num == 3) {
            //This condition is used to search for books by the same author

            string author;
            cout << "Enter The book author name: \n";
            cin.ignore(); // Clear the input buffer
            getline(cin, author);
            l1.findBookByAuthor(author);
        }
        else if (num == 4) {
            //This condition is used to cheak if the user can borrow a book or not

            string title;
            cout << "Enter The book title : \n";
            cin.ignore(); // Clear the input buffer
            getline(cin, title);
            if (l1.borrowBook(title)) {
                cout << "The book is yours now\n";
            }
            else {
                cout << "Unfortunately, the book is not available\n";
            }
        }
        else if (num == 5) {
            //This condition is used to return a borrowed book to the library

            string title;
            cout << "Enter The book title : \n";
            cin.ignore(); // Clear the input buffer
            getline(cin, title);
            l1.returnBook(title);
        }
        else if (num == 6) {
            cout << "The num of available books in library :";
            cout << l1.count() << endl;
        }
        else if (num == 7) {
            l1.display_books();
        }

        cout << "\n";
    }
}


