#include<iostream>
using namespace std;
class teacher
{
protected:
char tname[20],taddress[20];
int age;
public:
void input()
{
    cout<<"Enter Teacher Name: ";
    cin>>tname;
    cout<<"Enter Teacher Age: ";
    cin>>age;
    cout<<"Enter Teacher address: ";
    cin>>taddress;
}
void display()
{
    cout<<"\n\nTeacher Name= "<<tname<<endl;
    cout<<"Teacher Age= "<<age<<endl;
    cout<<"Teacher Address= "<<taddress<<endl;
}
};
class writer
{
protected:
char wname[20],waddress[20];
int nbooks;
public:
void input()
{
    cout<<"Enter Writer Name: ";
    cin>>wname;
    cout<<"Enter Writer Address: ";
    cin>>waddress;
    cout<<"Enter No. of Books Write: ";
    cin>>nbooks;
}
void display()
{
    cout<<"Writer Name= "<<wname<<endl;
    cout<<"Writer Address= "<<waddress<<endl;
    cout<<"Written Books= "<<nbooks<<endl;
}
};
class Scholar : public teacher, public writer
{
public:
void input()
{
    teacher::input();
    writer::input();
}
void display()
{
    teacher::display();
    writer::display();
}
};
int main()
{
    Scholar obj;
    obj.input();
    obj.display();
    return 0;
}