#include <iostream>
using namespace std;
template <class type>
class test
{
    type arr[3];

public:
    void in()
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
    }
    void show()
    {
        cout << "Values in the array are:" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i] << "\t";
        }
        cout<<endl;
    }
};
int main()
{
    test<int> t1;
    cout << "Enter three integers" << endl;
    t1.in();
    t1.show();
    test<char> t2;
    cout << "Enter three characters" << endl;
    t2.in();
    t2.show();
    return 0;
}