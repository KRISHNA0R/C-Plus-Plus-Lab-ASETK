// ============================================================
//  Experiment : Functions - Call by Value
//  Aim        : Show that a function working on a copy of the
//               argument cannot modify the original variable.
// ============================================================

#include <iostream>
using namespace std;

void changeByValue(int x)
{
    x = x + 10;
    cout << "Inside function (call by value): " << x << endl;
}

int main()
{
    int a = 10;

    cout << "Before function call: " << a << endl;
    changeByValue(a);
    cout << "After function call : " << a << endl;

    return 0;
}
