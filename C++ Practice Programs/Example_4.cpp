/*In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a; i<=b; i++,a++)
    {
        if(a==1)
        cout<<"one"<<endl;
        else if(a==2)
        cout<<"two"<<endl;
        else if(a==3)
        cout<<"three"<<endl;
        else if(a==4)
        cout<<"four"<<endl;
        else if(a==5)
        cout<<"five"<<endl;
        else if(a==6)
        cout<<"six"<<endl;
        else if(a==7)
        cout<<"seven"<<endl;
        else if(a==8)
        cout<<"eight"<<endl;
        else if(a==9)
        cout<<"nine"<<endl;
        else if(a%2==0)
        cout<<"even"<<endl;
        else{
        cout<<"odd"<<endl;
        }
    }
    
    return 0;
}
