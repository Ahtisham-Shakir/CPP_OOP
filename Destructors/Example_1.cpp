#include <iostream>
using namespace std;
class test
{
    int n;

public:
    test()
    {
        cout << "Object Created" << endl;
    }
    ~test()
    {
        cout << "Object Destroyed" << endl;
    }
};
int main()
{
    test a, b;
}