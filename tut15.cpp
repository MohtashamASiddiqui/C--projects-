#include <iostream>
using namespace std;

// Function prototype
// type function-name (arguments);
// int sum(int a, int b); Acceptable
// int sum(int a,  b); not Acceptable
int sum(int, int);
void g(void);

int main()
{
    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    // num1  and num2 are actual parameters
    cout << "The sun is " << sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b)
{
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2
    int c = a + b;
    return c;
}

void g()
{
    cout << "\nHello, Good morning";
}