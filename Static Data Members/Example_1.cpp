#include<iostream>
using namespace std;
class test{
static int n;
public:
test()
{
    n++;
}
void show()
{
    cout<<"You have created "<<n<<" objects so far"<<endl;

}
};
int test :: n=0;
int main()
{
    test x,y;
    x.show();
    test z;
    x.show();
}