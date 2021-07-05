#include <iostream>
using namespace std;
class computer
{
protected:
    int word;       // bits
    int memory;     //Megabytes
    double storage; // Megabytes
    int speed;      // Megahertz
public:
    computer()
    {
    }
    computer(int w, int m, double st, int sp)
    {
        word = w;
        memory = m;
        storage = st;
        speed = sp;
    }
    void show()
    {
        cout << "Word Size= " << word << endl;
        cout << "Memory Size=  " << memory << endl;
        cout << "Storage Size= " << storage << endl;
        cout << "Speed= " << speed << endl;
    }
};
class laptop : public computer
{
private:
    double length, width, height, weight;

public:
    laptop()
    {
    }
    laptop(double len, double wid, double hei, double wei, int w, int m, double st, double sp) : computer(w, m, st, sp)
    {
        length = len;
        width = wid;
        height = hei;
        weight = wei;
    }
    void show()
    {
        computer::show();
        cout << "Length= " << length << endl;
        cout << "Width= " << width << endl;
        cout << "Height= " << height << endl;
        cout << "Weight= " << weight << endl;
    }
};
int main()
{
    computer comp(4, 512, 20, 2);
    laptop lap(15, 19, 14, 2, 8, 1024, 50, 2);
    cout << "Computer Specification: " << endl;
    comp.show();
    cout << "Laptop Specification: " << endl;
    lap.show();
}