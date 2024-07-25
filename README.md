This is a simple console-based Library Management System implemented in C++. The system allows users to add books, display all books, and remove books based on their ID.

Features
  Add Book: Add a new book to the library.
  Display Books: Display all books currently in the library.
  Remove Book: Remove a book from the library using its ID.
  Exit: Exit the program.

  
Classes :- The classes used in the code are mentioned below.
Book
  Represents a book with a title, author, and ID.

Attributes:
  `title`: The title of the book.
  `author`: The author of the book.
  `id`: The ID of the book.
Library
  Manages a collection of books.

Attributes:
  `books`: A vector containing all the books in the library.
  
Methods:
  `addBook(const Book &book)`: Adds a new book to the library.
  `displayBooks()`: Displays all the books in the library.
  `removeBook(int bookId)`: Removes a book from the library using its ID.

This is flow of the program
1.The user is presented with a menu to choose an action:
    Add a book
    Display all books
    Remove a book
    Exit the program
2.Based on the user's choice, the corresponding action is performed.
3.The program continues to run until the user chooses to exit.

This is the basic example of how the code works.
Library Management System
  1. Add Book
  2. Display Books
  3. Remove Book
  4. Exit
  Enter your choice: 1
  Enter book title: The Great Gatsby
  Enter book author: F. Scott Fitzgerald
  Enter book ID: 1
  Book added successfully.
  
  Library Management System
  1. Add Book
  2. Display Books
  3. Remove Book
  4. Exit
  Enter your choice: 2
  Library Books:
  ID: 1, Title: The Great Gatsby, Author: F. Scott Fitzgerald
  
  Library Management System
  1. Add Book
  2. Display Books
  3. Remove Book
  4. Exit
  Enter your choice: 4
  Exiting the program.
