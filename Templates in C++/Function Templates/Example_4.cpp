#include <iostream>
using namespace std;
template <class type>
type Fmin(type arr[], int s)
{
    type min;
    min = arr[0];
    for (int i = 0; i < s; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int main()
{
    int iarr[] = {5, 4, 3, 2, 1};
    char carr[] = {'z', 'y', 'c', 'b', 'a'};
    double darr[] = {3.3, 5.5, 2.2, 1.1, 4.4};
    cout << "integer Minimum=" << Fmin(iarr, 5) << endl;
    cout << "Character Minimun= " << Fmin(carr, 5) << endl;
    cout << "Double Minimun= " << Fmin(darr, 5) << endl;
    return 0;
}