#include<iostream>
using namespace std;
class test{
private:
int n;
public:
void in()
{
    cout<<"Enter an integer: ";
    cin>>n;
}
void out()
{
    cout<<"The value of n= "<<n;
}
};
int main()
{
    test obj;
    obj.in();
    obj.out();
}