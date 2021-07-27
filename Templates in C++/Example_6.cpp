#include <iostream>
using namespace std;
template <class type>
class test
{
private:
    type arr[5];

public:
    void in()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    void show()
    {
        int i;
        cout << "Enter index: ";
        cin >> i;
        cout << "The value at required index= " << arr[i] << endl;
    }
};
int main()
{
    test<int> x;
    cout << "Enter 5 integers: " << endl;
    x.in();
    x.show();
    test<char> y;
    cout << "Enter 5 Characters: " << endl;
    y.in();
    y.show();
    return 0;
}