#include <iostream>
#include <conio.h>
using namespace std;
class customer
{
private:
    string name;
    int age;
    int balance;
    static int count;

public:
    customer(string x, int y, int z);
    void show();
    void display();
};
customer::customer(string x, int y, int z)
{
    this->name = x;
    this->age = y;
    this->balance = z;
    count++;
}
void customer::show()
{
    cout << name << " " << age << " " << balance << " " << endl;
}
void customer::display()
{
    cout << "The Total number of the customer is:" << count << endl;
}
int customer::count;
int main()
{
    customer A1("Shantanu", 22, 1000);
    A1.show();
    customer A2("Sambit", 23, 2000);
    A2.show();
    customer A3("Shibu", 24, 3000);
    A3.show();
    customer A4("Sagar", 25, 4000);
    A4.show();
    customer A5("Subhrajit", 26, 5000);
    A5.show();
    A5.display();
    getch();
    return 0;
}