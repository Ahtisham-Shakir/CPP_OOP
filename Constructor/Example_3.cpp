#include <iostream>
using namespace std;
class student
{
    int marks;
    char grades;

public:
    student(int m, char g)
    {
        marks = m;
        grades = g;
    }
    void show()
    {
        cout << "Marks =" << marks << endl;
        cout << "Grades= " << grades << endl;
    }
};
int main()
{
    student s1(730, 'A'), s2(620, 'B');
    cout << "The Result of Student 1: " << endl;
    s1.show();
    cout << "The Result of Student 2: " << endl;
    s2.show();
    return 0;
}