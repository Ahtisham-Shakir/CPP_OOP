#include <iostream>
#include <conio.h>
using namespace std;
class person
{
protected:
    int id;
    char name[20], address[20];

public:
    person()
    {
        id = 0;
        name[0] = '\0';
        address[0] = '\0';
    }
    void in()
    {
        cout << "Enter Name: ";
        gets(name);
        cout << "Enter Id: ";
        cin >> id;
        cout << "Enter Address: ";
        gets(address);
    }
    void display()
    {
        cout << "Your Personal information is as follow" << endl;
        cout << "ID= " << id << endl;
        cout << "Name= " << name << endl;
        cout << "Address= " << address << endl;
    }
};
class student : public person
{
    int rno, marks;

public:
    student()
    {
        rno = marks = 0;
    }
    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rno;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void show()
    {
        cout << "Your Educational information is as follow" << endl;
        cout << "Roll No= " << rno << endl;
        cout << "Marks= " << marks << endl;
    }
};
int main()
{
    student s;
    s.in();
    s.input();
    s.display();
    s.show();
    return 0;
}
