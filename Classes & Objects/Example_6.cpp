#include<iostream>
using namespace std;
class array
{
int arr[5];
public:
void fill();
void display();
int max();
int min();
};
void array :: fill()
{
    for(int i=0; i<5; i++)
    {
        cout<<"Enter an integer: ";
        cin>>arr[i];
    }
}
void array ::display()
{
    cout<<"The elements in the array are: "<<endl;
    for(int i=0; i<5; i++)
    cout<<arr[i]<<endl;
}
int array ::max()
{
    int m=arr[0];
    for(int i=0; i<5; i++)
    {
        if(arr[i]>m)
        m=arr[i];
    }
    return m;
}
int array ::min()
{
    int m=arr[0];
    for(int i=0; i<5; i++)
    {
        if(arr[i]<m)
        m=arr[i];
    }
    return m;
}
int main()
{
array obj;
obj.fill();
obj.display();
cout<<"Maximum value= "<<obj.max()<<endl;
cout<<"Minimum value= "<<obj.min();
return 0;
}