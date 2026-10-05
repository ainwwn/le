#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <string>
#include <vector>
#include "Book.h"
using namespace std;

class Library
{
private:
    vector<Book> bookList;
public:
    void addBook(const Book& b);
    // 必须写这一行！声明showAllBooks
    void showAllBooks() const;
    Book& getBook(int index);
};
#endif
