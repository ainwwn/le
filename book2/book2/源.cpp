#include "Book.h"
#include "Student.h"
#include "Library.h"
int main()
{
    Book b1("C++", "9787115546081", "Press", 49.8, 320, true);
    Library lib;
    lib.addBook(b1);

    cout << "==== Before borrow: Library books ====" << endl;
    lib.showAllBooks();

    Student s1("2025001", "ZhangSan");
    Book& bookFromLib = lib.getBook(0);
    s1.borrowBook(bookFromLib);

    cout << "\n==== 馆藏这本书借阅后状态 ====" << endl;
    bookFromLib.showInfo();

    cout << "\n==== Library books after borrow ====" << endl;
    lib.showAllBooks();

    return 0;
}
