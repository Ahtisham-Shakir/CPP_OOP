#include <iostream>
#include <conio.h>
using namespace std;
// Creating Employee class
class employee
{
private:
    int id, scale;

public:
    // Member Function to input values
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Scale: ";
        cin >> scale;
    }
    // Member Function to show values
    void show()
    {
        cout << "Employee ID= " << id << endl;
        cout << "Employee Scale= " << scale << endl;
    }
};
// Creating manager class inherited from employee (Single Inheritace)
class manager : public employee
{
private:
    int id;
    char depar[20];

public:
    // Member function to input values
    void input()
    {
        employee::input();
        cout << "Enter Manager ID: ";
        cin >> id;
        cout << "Enter Manager Department: ";
        cin >> depar;
    }
    // Member function to show values
    void show()
    {
        employee::show();
        cout << "Manager ID= " << id << endl;
        cout << "Manager Department= " << depar << endl;
    }
};
int main()
{
    manager obj;
    obj.input();
    obj.show();
    return 0;
}