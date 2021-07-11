#include <iostream>
using namespace std;
// Creating LocalPhone class
class LocalPhone
{
protected:
    long ph;

public:
    // Member function to input number
    void input()
    {
        cout << "Enter Local Phone Number: ";
        cin >> ph;
    }
    // Member function to show number
    void show()
    {
        cout << "Phone No= " << ph << endl;
    }
};
// Creating class Natphone inherit from LocalPhone
class NatPhone : public LocalPhone
{
protected:
    int cicode;

public:
    // Member function to input city code
    void input()
    {
        cout << "Enter City Code: ";
        cin >> cicode;
        LocalPhone::input();
    }
    // Member function to input city code
    void show()
    {
        cout << "City Code= " << cicode << endl;
        LocalPhone::show();
    }
};
// Creating Class IntPhone inherit from NatPhone
class IntPhone : public NatPhone
{
private:
    int concode;

public:
    // Member function to input country code
    void input()
    {
        cout << "Enter Country Code: ";
        cin >> concode;
        NatPhone::input();
    }
    // Member function to show country code
    void show()
    {
        cout << "Country Code= " << concode << endl;
        NatPhone::show();
    }
};
int main()
{
    IntPhone obj;
    obj.input();
    obj.show();
    return 0;
}