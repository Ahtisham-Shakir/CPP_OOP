/* Pure Virtual function have no body
    syntax is ---> virtual show()=0
    Abstract class is class that contain pure virtual function
*/
#include <iostream>
using namespace std;
class parent
{
public:
    virtual void show() = 0;
};
class child1 : public parent
{
public:
    void show()
    {
        cout << "Class child1..." << endl;
    }
};
class child2 : public parent
{
public:
    void show()
    {
        cout << "Class child2..." << endl;
    }
};
int main()
{
    parent *ptr[2];
    ptr[0] = new child1;
    ptr[1] = new child2;
    ptr[0]->show();
    ptr[1]->show();
    return 0;
}