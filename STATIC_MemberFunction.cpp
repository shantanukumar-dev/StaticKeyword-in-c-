#include <iostream>
#include <conio.h>
using namespace std;
class demo
{
private:
    int a;
    static int b;

public:
    void initilize(int x);
    void display();
    static void show();
};
int demo::b;
void demo::initilize(int x)
{
    a = x;
    b++;
}
void demo::display()
{
    cout << "The value of the a is:" << a << endl;
    cout << "The value of the b is:" << b << endl;
}
void demo::show()
{
    cout << "The value of the b is:" << b << endl;
}
int main()
{
    demo obj1;
    obj1.initilize(10);
    obj1.display();
    cout << "" << endl;
    demo::show();
    getch();
    return 0;
}