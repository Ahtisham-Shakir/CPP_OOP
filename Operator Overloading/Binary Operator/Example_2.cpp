#include <iostream>
using namespace std;
class read
{
    int days, pages;

public:
    read()
    {
        days = pages = 0;
    }
    void in()
    {
        cout << "How many pages have you read: ";
        cin >> pages;
        cout << "How many days have you read: ";
        cin >> days;
    }
    void show()
    {
        cout << "You read " << pages << " Pages in " << days << " days " << endl;
    }
    void operator+=(read r)
    {
        pages = pages + r.pages;
        days = days + r.days;
    }
};
int main()
{
    read r1, r2;
    r1.in();
    r2.in();
    cout << "Reading Number 1: " << endl;
    r1.show();
    cout << "Reading Number 2: " << endl;
    r2.show();
    cout << "Adding r1 and r2 using += " << endl;
    r2 += r1;
    r2.show();
    return 0;
}