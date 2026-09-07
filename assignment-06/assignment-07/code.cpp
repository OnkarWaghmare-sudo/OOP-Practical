#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    float marks;

    Student()
    {
        rollNo = 0;
        marks = 0;
        cout << "Constructor called" << endl;
    }

    Student(int r, float m)
    {
        rollNo = r;
        marks = m;
    }

    void accept()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\tRoll No: " << rollNo;
        cout << "\tMarks: " << marks;
    }

    ~Student()
    {
        cout << "\n\nDestructor called for Roll No: " << rollNo;
    }
};

int main()
{
    Student s[3];

    cout << "Enter details of Student 1-  ";
    s[0].accept();

    cout << "\nEnter details of Student 2-  ";
    s[1].accept();

    s[2].rollNo = 3;
    s[2].marks = 85;

    cout << "\nDetails of Student 1:";
    s[0].display();

    cout << "\nDetails of Student 2:";
    s[1].display();

    cout << "\nDetails of Student 3:";
    s[2].display();

    return 0;
}
