#include <iostream>
using namespace std;
class simple
{
protected:
    int a, b;

public:
    simple()
    {
        a = b = 0;
    }
    void in()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    }
    void add()
    {
        cout << "a+b= " << a + b << endl;
    }
    void sub()
    {
        cout << "a-b= " << a - b << endl;
    }
    void mul()
    {
        cout << "a*b= " << a * b << endl;
    }
    void div()
    {
        cout << "a/b= " << a / b << endl;
    }
};
class complex : public simple
{
public:
    // Overriding add function
    void add()
    {
        if (a > 0 && b > 0)
            simple ::add();
        else
            cout << "Values of a and b cannot be zero" << endl;
    }
    // Overriding sub function
    void sub()
    {
        if (a > 0 && b > 0)
            simple ::sub();
        else
            cout << "Values of a and b cannot be zero" << endl;
    }
    // Overriding mul function
    void mul()
    {
        if (a > 0 && b > 0)
            simple ::mul();
        else
            cout << "Values of a and b cannot be zero" << endl;
    }
    // Overriding div function
    void div()
    {
        if (a > 0 && b > 0)
            simple ::div();
        else
            cout << "Values of a and b cannot be zero" << endl;
    }
};
int main()
{
    complex obj;
    obj.add();
    obj.in();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}