#include <iostream>
using namespace std;
template <class type>
void reverse(type a, type b, type c)
{
    cout << "The values in the Reverse order" << endl;
    cout << c << "\t" << b << "\t" << a << endl;
}
int main()
{
    int x, y, z;
    cout << "Enter three integers: " << endl;
    cin >> x >> y >> z;
    reverse(x, y, z);
    float d, e, f;
    cout << "Enter three Floating Point Numbers: " << endl;
    cin >> d >> e >> f;
    reverse(d, e, f);
    return 0;
}