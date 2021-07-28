#include <iostream>
using namespace std;
template <class t1, class t2>
class test
{
public:
    t1 a;
    t2 b;
    test(t1 x, t2 y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << endl
             << b;
    }
};
int main()
{
    test<int, float> obj(5, 0.1);
    obj.show();
    return 0;
}