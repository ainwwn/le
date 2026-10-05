#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string bookName;
    string isbn;
    string publisher;
    double price;
    int page;
    bool inStore;

    bool checkISBN(const string& isbn);
public:
    Book();
    Book(string name, string id, string pub, double pri, int pg, bool status);

    string getBookName() const;
    string getIsbn() const;
    bool getInStore() const;
    void setInStore(bool status);

    void showInfo() const;

    Book(const Book& other);
    Book& operator=(const Book& other);
    ~Book();
};
#endif
