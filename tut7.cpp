#include <iostream>

using namespace std;

int c = 45;

int main()
{
    // *************Build in data type
    // int a, b, c;
    // cout << "Enter the value of a:" << endl;
    // cin >> a;
    // cout << "Enter the value of b:" << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sun is " << c << endl;
    // // To get the global var we use scope resolution operate “::”.
    // cout << "The global c is " << ::c;

    // *************float, double and long double literals***************
    // float d = 34.4;
    // long double e = 34.4;
    // the above var are both long double type when the float one if we the float to working we will have to add f in the end of the number.
    // float d = 34.4f;
    // long double e = 34.4l;
    // cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    // cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    // cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    // cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    // cout << "The value of d is " << d << endl
    //      << "The value of e is " << e;

    // *********Reference Variable********
    // We use reference variable to change the name of one of variable by & as we have show below
    // float x = 455;
    // float &y = x;
    // cout << x << endl;
    // cout << y << endl;

    // ***********Typecasting**********
    // Typecasting means to change the type of variable for example given below
    // int a = 45;
    // float b = 45.46;
    // cout << "The value of a is " << (float)a << endl;
    // cout << "The value of a is " << float(a) << endl;

    // cout << "The value of b is " << (int)b << endl;
    // cout << "The value of b is " << int(b) << endl;
    // int c = int(b);

    // cout << "The expression is " << a + b << endl;
    // cout << "The expression is " << a + (int)b << endl;
    // cout << "The expression is " << a + int(b) << endl;

    return 0;
}