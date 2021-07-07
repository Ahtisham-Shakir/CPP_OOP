#include <iostream>
using namespace std;
class A
{
private:
    int a;

public:
    void get()
    {
        cout << "Enter a: ";
        cin >> a;
    }
    void show()
    {
        cout << "Value of a= " << a << endl;
    }
};
class B
{
private:
    int b;

public:
    void get()
    {
        cout << "Enter b: ";
        cin >> b;
    }
    void show()
    {
        cout << "value of b= " << b << endl;
    }
};
class C : public A, public B
{
private:
    int c;

public:
    void get()
    {
        A::get();
        B::get();
        cout << "Enter c: ";
        cin >> c;
    }
    void show()
    {
        A::show();
        B::show();
        cout << "value of c= " << c << endl;
    }
};
int main()
{
    C obj;
    obj.get();
    obj.show();
    return 0;
}