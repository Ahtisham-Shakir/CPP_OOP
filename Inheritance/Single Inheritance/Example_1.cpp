#include <iostream>
using namespace std;
class move
{
protected:
    int position;

public:
    move()
    {
        position = 0;
    }
    void forward()
    {
        position++;
    }
    void show()
    {
        cout << "Position= " << position << endl;
    }
};
class move2 : public move
{
public:
    void backward()
    {
        position--;
    }
};
int main()
{
    move2 m;
    m.show();
    m.forward();
    m.show();
    m.backward();
    m.show();
    return 0;
}