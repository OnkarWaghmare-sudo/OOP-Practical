#include <iostream>
using namespace std;

class Calculator
{
public:

void add(int a, int b)

{
cout << "Sum of two numbers = " << a + b << endl;
}

void add(int a, int b, int c)
{
 cout << "Sum of three numbers = " << a + b + c << endl;
}

void add(double a, double b)
{
cout << "Sum of two decimal numbers = " << a + b << endl;
}
};


int main()
{
Calculator c;
c.add(20, 50);
c.add(30, 50, 20);
c.add(20.5, 50.5);

    return 0;
}
