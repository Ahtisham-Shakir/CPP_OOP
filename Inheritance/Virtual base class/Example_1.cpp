/*    Virtual base class prevent a data member from duplication while inheritance

for example:
Student ---> Test
Student ---> Sports
Test, Sports ---> Result

The data members of student inherit into test and sports when test and sport inherit into Result they duplicate same data member of Student class and create Ambiguity

*/

#include <iostream>
using namespace std;
class student
{
protected:
    int rno;

public:
    void set_rno(int r)
    {
        rno = r;
    }
    void print_rno()
    {
        cout << "Your Roll No is= " << rno << endl;
    }
};
class test : virtual public student
{
protected:
    int maths, physics;

public:
    void set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Your marks are: " << endl
             << "Maths= " << maths << endl
             << "Physics= " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void print_score()
    {
        cout << "Your Score is= " << score << endl;
    }
};
class result : public test, public sports
{
protected:
    int total;

public:
    void display()
    {
        total = maths + physics + score;
        print_rno();
        print_marks();
        print_score();
        cout << "Your Total score= " << total << endl;
    }
};
int main()
{
    result obj;
    obj.set_rno(1);
    obj.set_marks(99, 100);
    obj.set_score(95);
    obj.display();
    return 0;
}
