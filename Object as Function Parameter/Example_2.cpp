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
    travel add(travel o)
    {
        travel t;
        t.km = km + o.km;
        t.hr = hr + o.hr;
        return t;
    }
};
int main()
{
    travel my, your, r;
    my.get();
    my.show();
    your.get();
    your.show();
    r = my.add(your);
    cout << "Total Travelling is as follow: " << endl;
    r.show();
}
