#include<iostream>
using namespace std;
class circle{
float r;
public:
void get_radius(float radius)
{
r = radius;
}
void area()
{
    float a;
    a= 3.14*r*r;
    cout<<"Area= "<<a<<endl;
}
void circum()
{
    float c;
    c= 2*3.14*r;
    cout<<"Circumference= "<<c<<endl;
}
};
int main()
{
    circle obj;
    float radius;
    cout<<"Enter radius: ";
    cin>>radius;
    obj.get_radius(radius);
    obj.area();
    obj.circum();
    return 0;
}