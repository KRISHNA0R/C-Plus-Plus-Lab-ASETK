#include <iostream>
using namespace std;

void add(int a[2][2], int b[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << a[i][j] + b[i][j] << " ";
        cout << endl;
    }
}

void subtract(int a[2][2], int b[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << a[i][j] - b[i][j] << " ";
        cout << endl;
    }
}

void multiply(int a[2][2], int b[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int sum = 0;
            for (int k = 0; k < 2; k++)
                sum += a[i][k] * b[k][j];
            cout << sum << " ";
        }
        cout << endl;
    }
}

void transpose(int a[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }
}

int main()
{
    int a[2][2], b[2][2], choice;

    cout << "Enter first matrix:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    }

    cout << "Enter second matrix:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> b[i][j];
    }

    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n";
    cin >> choice;

    switch (choice)
    {
        case 1:
            add(a, b);
            break;
        case 2:
            subtract(a, b);
            break;
        case 3:
            multiply(a, b);
            break;
        case 4:
            transpose(a);
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
