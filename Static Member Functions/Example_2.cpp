#include<iostream>
using namespace std;
class test
{
    static int n;
    public:
    test()
    {
        n++;
    }
    static void show()
    {
        cout<<n<<" Objects has been created so far "<<endl;
    }
    
};
int test :: n=0;
int main()
{
    test::show();
    test x,y;
    test::show();
    test z;
    test :: show();
    return 0;
}
