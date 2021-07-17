#include<iostream>
using namespace std;
class test
{
    private:
    int n;
    public:
    void in()
    {
        cout<<"Enter n: ";
        cin>>n;
    }
    void out()
    {
        cout<<"n= "<<n<<endl;
    }
};
int main()
{
    test *ptr;
    ptr = new test;
    ptr ->in();
    ptr ->out();
    return 0;

}