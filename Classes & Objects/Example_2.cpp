#include<iostream>
using namespace std;
class marks{
int a,b,c;
public:
void in()
{
    cout<<"Enter three marks: ";
    cin>>a>>b>>c;
}
int sum()
{
    return (a+b+c);
}
float avg()
{
    return (a+b+c)/3.0;
}
};
int main()
{
    marks obj;
    obj.in();
    cout<<"Sum= "<<obj.sum()<<endl;
    cout<<"Average= "<<obj.avg();
}