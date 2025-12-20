#include <iostream>

using namespace std;

class book
{
    int serial;
    string author;
    string title;
    int no_pages;
    float price;

public:

    void setSerial(int s) { serial = s; }
    void setAuthor(string a) { author = a; }
    void setTitle(string t) { title = t; }
    void setNoPages(int p) { no_pages = p; }
    void setPrice(float pr) { price = pr; }

    int getSerial() { return serial; }
    string getAuthor() { return author; }
    string getTitle() { return title; }
    int getNoPages() { return no_pages; }
    float getPrice() { return price; }
    
    void display()
    {
        cout << "Serial: " << serial << endl;
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "No. of Pages: " << no_pages << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    book b;

    b.setSerial(1);
    b.setAuthor("Stephen King");
    b.setTitle("The Shining");
    b.setNoPages(447);
    b.setPrice(15.99);

    cout << "Book Details:" << endl;
    cout << "Serial: " << b.getSerial() << endl;
    cout << "Author: " << b.getAuthor() << endl;
    cout << "Title: " << b.getTitle() << endl;
    cout << "No. of Pages: " << b.getNoPages() << endl;
    cout << "Price: $" << b.getPrice() << endl;
    
    cout << "\n--- Using Display Method ---" << endl;
    b.display();
    
    return 0;
}