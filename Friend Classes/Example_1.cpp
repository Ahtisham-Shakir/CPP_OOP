#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A()
    {
        a = 10;
        b = 20;
    }
    friend class B;
};
class B
{
public:
    void showA(A obj)
    {
        cout << "Value of a is= " << obj.a << endl;
    }
    void showB(A obj)
    {

        cout << "Value of b is= " << obj.b << endl;
    }
};
int main()
{
    A x;
    B y;
    y.showA(x);
    y.showB(x);
}