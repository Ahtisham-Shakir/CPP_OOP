#include <iostream>
using namespace std;
class person
{
private:
    char name[20];

public:
    void in()
    {
        cout << "Enter Name= ";
        cin >> name;
    }
    void out()
    {
        cout << "Your Name= " << name << endl;
    }
};
int main()
{
    person *ptr[5];
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = new person;
        ptr[i]->in();
    }
    cout << "\nAll the names are as follow: " << endl;
    for (int i = 0; i < 5; i++)
    {
        ptr[i]->out();
    }
    return 0;
}