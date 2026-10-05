#include "Book.h"
#include "Student.h"

int main()
{
    cout << "====Test 1: Book class====" << endl;
    Book b1("C++", "9787115546081", "Press", 49.8, 320, true);
    b1.showInfo();

    Book b2 = b1;
    b2.showInfo();

    Book b3;
    b3 = b1;

    cout << "\n====Test 2: Student borrow====" << endl;
    Student s1("2025001", "ZhangSan");
    s1.showStuInfo();

    s1.borrowBook(b1);
    b1.showInfo();
    s1.showStuInfo();

    s1.borrowBook(b1);

    s1.returnBook(b1);
    b1.showInfo();

    return 0;
}
