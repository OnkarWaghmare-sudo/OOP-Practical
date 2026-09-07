#include <iostream>
using namespace std;

class Calculator
{
public:

void sub(int a, int b)
{
cout << "Difference of two numbers = " << a - b << endl;
}
void sub(int a, int b, int c)
{
 cout << "Difference of three numbers = " << a - b - c << endl;
}
void sub(double a, double b)
{
cout << "Difference of two decimal numbers = " << a - b << endl;
}
};

int main()
{
Calculator c;
c.sub(20, 50);
c.sub(30, 20, 50);
c.sub(20.5, 50.5);

    return 0;
}
