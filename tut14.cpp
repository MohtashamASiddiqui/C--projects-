#include <iostream>
using namespace std;

// Structure
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

// You can only use one in union because your memory is being shared
union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    Meal m1 = lunch;
    cout << m1;
    // cout << breakfast;
    // cout << lunch;
    // cout << dinner;
    // struct employee mike;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';

    // cout << m1.car;
    // mike.eId = 1;
    // mike.favChar = 'c';
    // mike.salary = 1200000;
    // cout << "This value is " << mike.eId << endl;
    // cout << "This value is " << mike.favChar << endl;
    // cout << "This value is " << mike.salary << endl;

    return 0;
}