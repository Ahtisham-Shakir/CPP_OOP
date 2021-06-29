#include<iostream>
#include <stdio.h>
#include<string.h>
#include<conio.h>
using namespace std;
class bank
{
private:
char name[20];
int acno;
char actype[20];
int bal;
public:
bank();
void deposit(int am);
void withdraw(int am);
void display();
};
bank:: bank()
{
    cout<<"Enter Name: ";
    gets(name);
    cout<<"Enter Account Number: ";
    cin>>acno;
    cout<<"Enter Account Type: ";
    gets(actype);
    cout<<"Enter Balance: ";
    cin>>bal;
}
void bank ::deposit(int am)
{
    bal = bal +am;
    cout<<"\nBalance after Deposite= "<<bal<<endl;
}
void bank ::withdraw(int am)
{
    if(am>bal)
    cout<<"Not Enough Balance Available"<<endl;
    else
    {

    bal = bal-am;
    cout<<"Balance After Withdraw= "<<bal<<endl;
    }
}
void bank ::display()
{
    cout<<"Account Details"<<endl;
    cout<<"Account Name: "<<name<<endl;
    cout<<"Account Number: "<<acno<<endl;
    cout<<"Account Type: "<<actype<<endl;
    cout<<"Current Balance: "<<bal<<endl;

}
int main()
{
    bank ac;
    int choice, a;
    do
    {
        cout<<"\n\nChoice List\n\n";
        cout<<"1: Deposite"<<endl;
        cout<<"2: Withdraw"<<endl;
        cout<<"3: Display All Details"<<endl;
        cout<<"4: Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"\nEnter amount: ";
            cin>>a;
            ac.deposit(a);
            break;
            case 2:
            cout<<"\nEnter amount: ";
            cin>>a;
            ac.withdraw(a);
            break;
            case 3:
            ac.display();
            break;
            case 4:
            exit(0);
        }

    } while (1);
    return 0;
    
}
