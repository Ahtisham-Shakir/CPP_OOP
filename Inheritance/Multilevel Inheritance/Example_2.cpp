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
        cout << "Enter Id: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Address: ";
        cin >> address;
    }
    void out()
    {
        cout << "\nPersonal Information is: \n";
        cout << "ID= " << id << endl;
        cout << "Name= " << name << endl;
        cout << "Address= " << address << endl;
    }
};
class student : public person
{
private:
    int rno, marks;

public:
    student()
    {
        rno = marks = 0;
    }
    void in()
    {
        person::in();
        cout << "Enter Roll No: ";
        cin >> rno;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void out()
    {
        person::out();
        cout << "\nStudent Information is: \n";
        cout << "Roll No= " << rno << endl;
        cout << "Marks= " << marks << endl;
    }
};
class scholarship : public student
{
private:
    char sname[20];
    int ammount;

public:
    void in()
    {
        student::in();
        cout << "Enter scholarship name: ";
        cin >> sname;
        cout << "Enter Ammount: ";
        cin >> ammount;
    }
    void out()
    {
        student::out();
        cout << "\nScholarship Information is: \n";
        cout << "Scholarship Name= " << sname << endl;
        cout << "Ammount= " << ammount << endl;
    }
};
int main()
{
    scholarship obj;
    obj.in();
    obj.out();
    return 0;
}
