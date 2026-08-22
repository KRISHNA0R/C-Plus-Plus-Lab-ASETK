// ============================================================
//  Experiment : Functions - Call by Reference
//  Aim        : Show that passing an argument by reference lets
//               the function modify the original variable.
// ============================================================

#include <iostream>
using namespace std;

void changeByReference(int &x)
{
    x = x + 10;
    cout << "Inside function (call by reference): " << x << endl;
}

int main()
{
    int a = 10;

    cout << "Before function call: " << a << endl;
    changeByReference(a);
    cout << "After function call : " << a << endl;

    return 0;
}
