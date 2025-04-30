#include <iostream>
#include <string>
using namespace std;
struct Book {
    string title;
    string author;
    float price;
};

int main() {
    const int numBooks = 3; 
    Book books[numBooks] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", 10.99},
        {"1984", "George Orwell", 8.99},
        {"To Kill a Mockingbird", "Harper Lee", 12.49}
    };
    cout << "Available Books:\n";
    cout << "--------------------------------\n";
    for (int i = 0; i < numBooks; i++) {
        cout << i + 1 << ". " << books[i].title << " by " << books[i].author << "\n";
    }
    cout << "--------------------------------\n";
    int choice;
    cout << "Enter the number of the book to view details (1-" << numBooks << "): ";
    cin >> choice;
    if (choice >= 1 && choice <= numBooks) {
        Book selectedBook = books[choice - 1];
        cout << "\nBook Details:\n";
        cout << "Title: " << selectedBook.title << "\n";
        cout << "Author: " << selectedBook.author << "\n";
        cout << "Price: $" << selectedBook.price << "\n";
    }
    else {
        cout << "Invalid choice! Please run the program again and select a valid number.\n";
    }

    return 0;
}