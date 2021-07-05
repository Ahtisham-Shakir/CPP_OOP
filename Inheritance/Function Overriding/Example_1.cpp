#include <iostream>
using namespace std;
class parent
{
protected:
    int n;

public:
    parent()
    {
        n = 0;
    }
    parent(int p)
    {
        n = p;
    }
    void show()
    {
        cout << "n= " << n << endl;
    }
};
class child : public parent
{
    char ch;

public:
    child() : parent()
    {
        ch = 'x';
    }
    child(char c, int m) : parent(m)
    {
        ch = c;
    }
    // Overriding Show function that already have in parent class
    void show()
    {
        // Calling show function of parent class using :: operator
        parent ::show();
        cout << "ch= " << ch << endl;
    }
};
int main()
{
    child obj('@', 100);
    obj.show();
    return 0;
}
