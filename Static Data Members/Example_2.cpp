#include<iostream>
using namespace std;
class students
{
private:
static int r;
int rno, marks;
char name[20];
public:
students()
{
    r++;
    rno=r;
}
void in()
{
    cout<<"Enter name: ";
    cin>>(name);
    cout<<"Marks: ";
    cin>>marks;
}
void show()
{
    cout<<"Name= "<<name<<endl;
    cout<<"Marks= "<<marks<<endl;
    cout<<"Roll No= "<<rno<<endl;
}
};
int students :: r=0;
int main()
{
    students s1,s2,s3;
    s1.in();
    s2.in();
    s3.in();
    cout<<"Information of the Students is as Follows"<<endl;
    s1.show();
    s2.show();
    s3.show();
    return 0;
}