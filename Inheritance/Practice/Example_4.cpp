#include <iostream>
using namespace std;
class book
{
private:
    int bookid, price;
    char bname[20];

public:
    void input()
    {
        cout << "Enter Book ID: ";
        cin >> bookid;
        cout << "Enter Book Name: ";
        cin >> bname;
        cout << "Enter Book price: ";
        cin >> price;
    }
    void show()
    {
        cout << "Book Id= " << bookid << endl;
        cout << "Book Name: " << bname << endl;
        cout << "Book Price: " << price << endl;
    }
};
class writer
{
private:
    char wname[20], address[20];
    int nbooks;
    book b[5];

public:
    void input()
    {
        cout << "Enter Writer Name: ";
        cin >> wname;
        cout << "Enter Writer address: ";
        cin >> address;
        cout << "No. of books written by him: ";
        cin >> nbooks;
        for (int i = 0; i < 5; i++)
        {
            b[i].input();
        }
    }
    void show()
    {
        cout << "\nWritre Name= " << wname << endl;
        cout << "writer address= " << address << endl;
        cout << "No. of Books= " << nbooks << endl;
        cout << "\nThe details of 5 books:\n";
        for (int i = 0; i < 5; i++)
            b[i].show();
    }
};
int main()
{
    writer obj;
    obj.input();
    obj.show();
    return 0;
}