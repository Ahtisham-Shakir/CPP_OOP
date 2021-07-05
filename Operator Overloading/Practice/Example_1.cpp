#include <iostream>
using namespace std;
class time
{
private:
    int h, m, s;

public:
    // constructor to initialize values
    time()
    {
        h = m = s = 0;
    }
    // Constructor using parameter to initialize values
    time(int hh, int mm, int ss)
    {
        h = hh;
        m = mm;
        s = ss;
    }
    // Overloading prefix ++ Operator
    void operator++()
    {
        if (m == 59)
        {
            m = 0;
            h++;
        }
        else
            m++;
    }
    // Overloading postfix -- Operator
    void operator--(int)
    {
        if (m == 0)
        {
            m = 59;
            h--;
        }
        else
            m--;
    }
    // Display Function
    void display()
    {
        cout << h << ":" << m << ":" << s << endl;
    }
};
int main()
{
    time t(10, 59, 50);
    t.display();
    ++t;
    t.display();
    t--;
    t.display();
    return 0;
}
