#include "Student.h"

Student::Student(string id, string name)
{
    stuId = id;
    stuName = name;
    borrowCnt = 0;
    cout << "Create student: " << stuName << endl;
}

bool Student::borrowBook(Book& b)
{
    if (b.getInStore() && borrowCnt < 3)
    {
        b.setInStore(false);
        borrowCnt++;
        cout << stuName << " borrow success" << endl;
        return true;
    }
    else
    {
        cout << stuName << " borrow failed" << endl;
        return false;
    }
}

bool Student::returnBook(Book& b)
{
    if (!b.getInStore() && borrowCnt > 0)
    {
        b.setInStore(true);
        borrowCnt--;
        cout << stuName << " return success" << endl;
        return true;
    }
    else
    {
        cout << stuName << " return failed" << endl;
        return false;
    }
}

void Student::showStuInfo()
{
    cout << "====Student Info====" << endl;
    cout << "ID:" << stuId << endl;
    cout << "Name:" << stuName << endl;
    cout << "Borrow count:" << borrowCnt << endl << endl;
}
