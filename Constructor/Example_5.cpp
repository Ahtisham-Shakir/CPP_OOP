#include <iostream>
#include <conio.h>
using namespace std;
class book
{
    int pg, pr;
    char title[20];

public:
    void in()
    {
        cout << "Enter title: ";
        gets(title);
        cout << "Enter pages: ";
        cin >> pg;
        cout << "Enter Price: ";
        cin >> pr;
    }
    void show()
    {
        cout << "Title= " << title << endl;
        cout << "Pages= " << pg << endl;
        cout << "Price= " << pr << endl;
    }
};
int main()
{
    book b1;
    b1.in();
    book b2(b1);
    book b3 = b1;
    cout << "The details of b1: " << endl;
    b1.show();
    cout << "The details of b2: " << endl;
    b2.show();
    cout << "The details of b3: " << endl;
    b3.show();
    return 0;
}