#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Book
{
public:
    string title;
    string author;
    int id;
    Book(string t, string a, int i) : title(t), author(a), id(i) {}
};
class Library
{
private:
    vector<Book> books;

public:
    void addBook(const Book &book)
    {
        books.push_back(book);
        cout << "Book added successfully.\n";
    }
    void displayBooks()
    {
        cout << "Library Books:\n";
        for (const auto &book : books)
        {
            cout << "ID: " << book.id << ", Title: " << book.title << ", Author: " << book.author << endl;
        }
    }
    void removeBook(int bookId)
    {
        auto it = find_if(books.begin(), books.end(), [bookId](const Book &b)
                          { return b.id == bookId; });
        if (it != books.end())
        {
            books.erase(it);
            cout << "Book removed successfully.\n";
        }
        else
        {
            cout << "Book not found.\n";
        }
    }
};
int main()
{
    Library library;
    while (true)
    {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Remove Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            string title, author;
            int id;
            cout << "Enter book title: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter book author: ";
            getline(cin, author);
            cout << "Enter book ID: ";
            cin >> id;
            Book newBook(title, author, id);
            library.addBook(newBook);
            break;
        }
        case 2:
            library.displayBooks();
            break;
        case 3:
        {
            int id;
            cout << "Enter book ID to remove: ";
            cin >> id;
            library.removeBook(id);
            break;
        }
        case 4:
            cout << "Exiting the program.\n";
            return 0;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}