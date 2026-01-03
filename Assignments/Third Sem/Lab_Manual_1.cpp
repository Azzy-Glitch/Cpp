#include <iostream>

using namespace std;

class library
{
    string book_title;
    string author;
    int year;

public:
    library()
    {
        book_title = "Unknown";
        author = "Unknown";
        year = 0;
    }
    library(string t, string a, int y)
    {
        book_title = t;
        author = a;
        year = y;
    }

    void display()
    {
        cout << "Book Title: " << book_title << endl;
        cout << "Author: " << author << endl;
        cout << "Book ID: " << year << endl;
    }
};

int main()
{

    library book1("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    library book2("To Kill a Mockingbird", "Harper Lee", 1960);
    book1.display();
    book2.display();
    library book3;
    book3.display();

    return 0;
}