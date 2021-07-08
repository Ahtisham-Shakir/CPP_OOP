//  Ambiguity is created in multiple inheritace if the name of function is same in two or more parent classes. The compiler cannot determine which function to execute when the object of derived class attempt to execute such function.

#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Class A" << endl;
    }
};
class B
{
public:
    void show()
    {
        cout << "Class B" << endl;
    }
};
class C : public A, public B
{
};
int main()
{
    C obj;
    //   obj.show();       // This is Ambiguity

    // Removing Ambiguity
    obj.A::show();
    obj.B::show();
    return 0;

    /* Another way of removing Ambiguity is to call function within the class For Example

class C : public A, public B
{
    public:
    void show()
    {
        A::show();
        B::show();
    }
}
*/
}
