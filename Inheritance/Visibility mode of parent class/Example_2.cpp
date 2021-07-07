/*  The accessibility of derived class in protected inheritance is as follow
      1. The Derived class can access public members of parent class.
      2. The Derived class can access protected members of parent class.
      3. The Derived class cannot access private members of parent class.

    The accessibility of an object of derived class is as follows:
      1. The object of derived class cannot access public members of parent class.
      2. The object of derived class cannot access protected members of parent class.
      3. The object of derived class cannot access private members of parent class.

*/

#include <iostream>
using namespace std;
class parent
{
public:
    int a;

protected:
    int b;

private:
    int c;
};
class child : protected parent
{
public:
    void in()
    {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    }
    void show()
    {
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;
    }
};
int main()
{
    child obj;
    obj.in();
    obj.show();
    return 0;
}