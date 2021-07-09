#include<iostream>
using namespace std;
class A
{
    public:
    void greet()
    {
        cout<<"How are you? "<<endl;
    }
};
class B
{
    public:
    void greet()
    {
        cout<<"Ki haal chaal ay? "<<endl;
    }
};
class C: public A, public B
{
    public:
    void greet()
    {
        B::greet();
    }

};
int main()
{
    C obj;
    obj.greet();
    return 0;
}
