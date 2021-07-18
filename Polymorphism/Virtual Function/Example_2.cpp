/*
Early Binding: occur when everything required to call a function is known at compile time.
Late Binding: occur when some of the information to call a function is known at run time.
*/
#include <iostream>
using namespace std;
class parent
{
public:
    virtual void show()
    {
        cout << "Class Parent..." << endl;
    }
};
class child1 : public parent
{
public:
    void show()
    {
        cout << "Class Child1..." << endl;
    }
};
class child2 : public parent
{
public:
    void show()
    {
        cout << "Class Child2..." << endl;
    }
};
int main()
{
    parent *ptr[5];
    int opt, i;
    cout << "Enter 1 for Parent, 2 for child1 & 3 for child2" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "Which object to create? " << endl;
        cin >> opt;
        if (opt == 1)
            ptr[i] = new parent;
        else if (opt == 2)
            ptr[i] = new child1;
        else
            ptr[i] = new child2;
    }
    for (i = 0; i < 5; i++)
    {
        ptr[i]->show();
    }
    return 0;
}