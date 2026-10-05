#include "Library.h"

void Library::addBook(const Book& b)
{
    bookList.push_back(b);
}

void Library::showAllBooks() const
{
    cout << "==== Library Book List ====" << endl;
    for (const auto& book : bookList)
    {
        book.showInfo();
    }
}

Book& Library::getBook(int index)
{
    return bookList[index];
}
