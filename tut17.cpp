#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // Not recommended to use below lines with inline function
    // static int c = 0; This is executes only once
    //  c = c + 1;  Next time this function is run, the value c will retained
    return a * b;
}

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    int a, b;
    // cout << "Enter the value of a and b" << endl;
    // cin >> a >> b;
    int money = 100000;
    // cout << "The product of a and b is " << product(a, b);
    cout
        << "If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money) << "Rs after 1 year" << endl;
    cout
        << "For VIP: If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money, 1.1) << "Rs after 1 year";
    return 0;
}