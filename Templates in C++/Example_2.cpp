#include <iostream>
using namespace std;
template <class type>
type sum(type a, type b)
{

    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int n;
    float m;
    n = sum(10, 50);
    cout << "Maximun of two integers is= " << n << endl;
    m = sum(3.5, 2.2);
    cout << "Maximun of two integers is= " << m << endl;
    return 0;
}