#include <iostream>
using namespace std;
class count
{
private:
    int n;

public:
    count()
    {
        n = 0;
    }
    void show()
    {
        cout << "n= " << n << endl;
    }
    void operator++()
    {

        n = n + 1;
    }
    void operator++(int)
    {
        n = n + 1;
    }
};
int main()
{
    count obj;
    obj.show();
    ++obj;
    obj.show();
    obj++;
    obj.show();
    return 0;
}