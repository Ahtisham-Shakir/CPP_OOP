#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata()
    {
        data1 = 10;
        data2 = 20;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};
class derived : public base
{
    int data3;

public:
    void process()
    {
        data3 = getdata1() * data2;
    }
    void display()
    {
        cout << "Value of data1= " << getdata1() << endl;
        cout << "Vlaue of data2= " << data2 << endl;
        cout << "Vlaue of data3= " << data3 << endl;
    }
};
int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}
