/* Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.*/

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    
    if(a>b && a>c && a>c)
    return a;

    else if(b>a && b>c && b>d)
    return b;

    else if(c>a && c>b && c>d)
    return c;

    else 
    return d;
}


int main() {
    int a, b, c, d;
    cout<<"Enter four numbers: ";
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<"Maximun number is= "<<ans;
    
    return 0;
}
