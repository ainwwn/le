#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

class Student
{
private:
    string stuId;
    string stuName;
    int borrowCnt;
public:
    Student(string id, string name);
    bool borrowBook(Book& b);
    bool returnBook(Book& b);
    void showStuInfo();
};
#endif
