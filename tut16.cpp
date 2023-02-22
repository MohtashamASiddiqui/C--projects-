#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference Variable
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 4, b = 5;
    // cout << "The sum of 4 and 5 is " << sum(a, b);
    cout << "The value of a is " << a << " and the value of  is " << b << endl;
    // swap(a, b); This will not swap a and b
    // swapPointer(&a, &b); This will swap a and b using pointer reference
    // swapPointer(&a, &b); This will swap a and b using reference variable
    swapReferenceVar(a, b); // This will swap a and b using reference variable
    cout << "The value of a is " << a << " and the value of  is " << b << endl;
    return 0;
}