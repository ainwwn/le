#include "Book.h"
#include <cctype>

bool Book::checkISBN(const string& isbn)
{
    if (isbn.size() != 13)
        return false;
    for (char ch : isbn)
    {
        if (!isdigit(ch))
            return false;
    }
    return true;
}

Book::Book()
{
    bookName = "unknown";
    isbn = "0000000000000";
    publisher = "unknown";
    price = 0.0;
    page = 0;
    inStore = true;
    cout << "Default constructor create book" << endl;
}

Book::Book(string name, string id, string pub, double pri, int pg, bool status)
{
    bookName = name;
    if (checkISBN(id))
        isbn = id;
    else
        isbn = "0000000000000";
    publisher = pub;
    price = pri;
    page = pg;
    inStore = status;
    cout << "Parameter constructor create book: " << bookName << endl;
}

string Book::getBookName() const
{
    return bookName;
}
string Book::getIsbn() const
{
    return isbn;
}
bool Book::getInStore() const
{
    return inStore;
}
void Book::setInStore(bool status)
{
    inStore = status;
}

void Book::showInfo() const
{
    cout << "====Book Info====" << endl;
    cout << "Name:" << bookName << endl;
    cout << "ISBN:" << isbn << endl;
    cout << "Publisher:" << publisher << endl;
    cout << "Price:" << price << endl;
    cout << "Page:" << page << endl;
    if (inStore)
        cout << "Status: available" << endl;
    else
        cout << "Status: borrowed" << endl;
    cout << endl;
}

Book::Book(const Book& other)
{
    bookName = other.bookName;
    isbn = other.isbn;
    publisher = other.publisher;
    price = other.price;
    page = other.page;
    inStore = other.inStore;
    cout << "Copy constructor" << endl;
}

Book& Book::operator=(const Book& other)
{
    if (this == &other)
    {
        return *this;
    }
    bookName = other.bookName;
    isbn = other.isbn;
    publisher = other.publisher;
    price = other.price;
    page = other.page;
    inStore = other.inStore;
    cout << "Assignment overload" << endl;
    return *this;
}

Book::~Book()
{
    cout << "Destructor delete book" << endl;
}
