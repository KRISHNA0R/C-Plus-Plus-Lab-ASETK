// ============================================================
//  Experiment : Functions - Call by Value vs Reference
//  Aim        : Compare both parameter-passing techniques side
//               by side using the same operation.
// ============================================================

#include <iostream>
using namespace std;

void byValue(int x)
{
    x = x + 10;
}

void byReference(int &x)
{
    x = x + 10;
}

int main()
{
    int a = 10;
    int b = 10;

    byValue(a);
    byReference(b);

    cout << "Call by value    : " << a << endl;
    cout << "Call by reference: " << b << endl;

    return 0;
}
