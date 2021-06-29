#include <iostream>
using namespace std;
class DB;
class DM
{
    float mt;
    int cm;

public:
    void input();
    void output();
    friend DM add(DM, DB);
};
class DB
{
    int feet;
    float inches;

public:
    void input();
    void output();
    friend DM add(DM, DB);
};
void DM::input()
{
    cout << "Enter meters: ";
    cin >> mt;
    cout << "Enter centimeters: ";
    cin >> cm;
}
void DM::output()
{
    cout << "Distance in meters= " << mt << endl;
    cout << "Distance in centimeters= " << cm << endl;
}
void DB::input()
{
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inches: ";
    cin >> inches;
}
void DB::output()
{
    cout << "Distace " << feet << " feet " << inches << " inches" << endl;
}
DM add(DM a, DB b)
{
    DM t;
    t.cm = a.cm + (b.feet * 12 * 2.54) + (b.inches * 2.54);
    t.mt = a.mt + (t.cm / 100);
}
int main()
{
    DM x, y;
    DB z;
    x.input();
    z.input();
    y = add(x, z);
    y.output();
    return 0;
}