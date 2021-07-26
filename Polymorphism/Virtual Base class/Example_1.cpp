#include <iostream>
using namespace std;
class parent
{
protected:
    int n;
};
class child1 : virtual public parent
{
};
class child2 : virtual public parent
{
};
class Baby : public child1, public child2
{
public:
    void get()
    {
        n = 10;
        cout << "n= " << n << endl;
    }
};
int main()
{
    Baby obj;
    obj.get();
    return 0;
}