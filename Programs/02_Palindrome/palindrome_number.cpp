// ============================================================
//  Experiment : Number Palindrome
//  Aim        : Read an integer and check whether it reads the
//               same forwards and backwards.
// ============================================================

#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int original = n;
    int reversed = 0;

    while (n > 0)
    {
        int rem = n % 10;
        reversed = reversed * 10 + rem;
        n = n / 10;
    }

    return original == reversed;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << n << " is a Palindrome." << endl;
    else
        cout << n << " is Not a Palindrome." << endl;

    return 0;
}
