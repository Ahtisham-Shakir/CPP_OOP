#include <iostream>
using namespace std;
class travel
{
private:
    int km, hr;

public:
    travel()
    {
        km = hr = 0;
    }
    void get()
    {
        cout << "Enter Kilometers Travelled:";
        cin >> km;
        cout << "Enter Hours Travelled: ";
        cin >> hr;
    }
    void show()
    {
        cout << "You travelled " << km << " km in " << hr << " hours." << endl;
    }
    void add(travel o)
    {
        travel t;
        t.km = km + o.km;
        t.hr = hr + o.hr;
        cout << "Total travelling is " << t.km << " Kilometers in " << t.hr << " hours." << endl;
    }
};
int main()
{
    travel my, your;
    my.get();
    my.show();
    your.get();
    your.show();
    my.add(your);
}
