#include <iostream>
using namespace std;
class test
{
private:
    int x, y;

public:
    test()
    {
        x = y = 100;
    }
    void avg()
    {
        float a;
        a = (x + y) / 2.0;
        cout << "X= " << x << endl;
        cout << "Y= " << y << endl;
        cout << "Average is= " << a << endl;
    }
};
int main()
{
    test obj;
    obj.avg();
}