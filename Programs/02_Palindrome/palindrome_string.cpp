// ============================================================
//  Experiment : String Palindrome
//  Aim        : Read a word and check whether it reads the same
//               forwards and backwards.
// ============================================================

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &s)
{
    int left = 0;
    int right = static_cast<int>(s.length()) - 1;

    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }

    return true;
}

int main()
{
    string s;

    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s))
        cout << "\"" << s << "\" is a Palindrome." << endl;
    else
        cout << "\"" << s << "\" is Not a Palindrome." << endl;

    return 0;
}
