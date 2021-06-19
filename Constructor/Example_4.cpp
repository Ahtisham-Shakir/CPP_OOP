#include <iostream>
using namespace std;
class over
{
    int num;
    char ch;

public:
    over()
    {
        num = 0;
        ch = 'x';
    }
    over(int n, char c)
    {
        num = n;
        ch = c;
    }
    void show()
    {
        cout << "Num= " << num << endl;
        cout << "Ch= " << ch << endl;
    }
};
int main()
{
    over first, second(100, 'p');
    cout << "The content of first: " << endl;
    first.show();
    cout << "The content of Second: " << endl;
    second.show();
    return 0;
}