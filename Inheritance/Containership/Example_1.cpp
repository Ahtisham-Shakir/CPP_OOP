/* A technique in which a class contains an object of another class as its member is called containership. This type of relationship between class is also called " has-a " relationship. It means that one class has an object of another class as a member. */

#include<iostream>
using namespace std;
class result
{
private:
int marks[3];
public:
void in()
{
    for(int i=0; i<3; i++)
    {
    cout<<"Enter marks:";
    cin>>marks[i];
    }
}
void show()
{
    int t=0;
    cout<<"\nResult Card:\n";
    for(int i=0; i<3; i++)
    {
        cout<<"Marks= "<<marks[i]<<endl;
        t= t+ marks[i];
    }
    cout<<"Total Marks= "<<t<<endl;
    cout<<"Average Marks= "<<float(t)/3.0<<endl;

}
};
class student
{
private:
int rno;
char name[50];
result res;
public:
void in()
{
    cout<<"Enter Roll No: ";
    cin>>rno;
    cout<<"Enter Name: ";
    cin>>name;
    res.in();
}
void show()
{
    cout<<"\nPersonal Information: \n";
    cout<<"Roll No= "<<rno<<endl;
    cout<<"Name= "<<name<<endl;
    res.show();
}
};
int main()
{
    student obj;
    obj.in();
    obj.show();
    return 0;
}