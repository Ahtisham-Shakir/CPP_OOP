#include<iostream>
using namespace std;
class result
{
    private:
int rno,marks[3];
char name[30];
public:
void input()
{
    cout<<"Enter Roll No: ";
    cin>>rno;
    cout<<"Enter name: ";
    cin>>name;
    for(int i=0; i<3; i++)
    {
        cout<<"Enter marks["<<i<<"]: ";
        cin>>marks[i];
    }
}
void show()
{
    cout<<"Roll No= "<<rno<<endl;
    cout<<"Name= "<<name<<endl;
    for(int i=0;i<3;i++)

    {
        cout<<"Marks["<<i<<"]= "<<marks[i]<<endl;
    }
}
int total()
{
    int t=0;
    for(int i=0; i<3;i++)
    {
        t=t+marks[i];
    }
    return t;
}
float avg()
{
    int t=0;
    for(int i=0; i<3;i++)
    {
        t=t+marks[i];
    }
    return t/3.0;
}
};
int main()
{
    result obj;
    obj.input();
    obj.show();
    cout<<"Total Marks= "<<obj.total()<<endl;
    cout<<"Average= "<<obj.avg()<<endl;
    return 0;
}