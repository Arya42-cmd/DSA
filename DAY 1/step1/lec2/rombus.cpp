#include <bits/stdc++.h>
using namespace std;

void rhombus(int n)
{
    // Top half
    for(int i = 1; i <= n; i++)
    {
        // Spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Stars
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Bottom half (starts from n to repeat the middle row)
    for(int i = n; i >= 1; i--)
    {
        // Spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Stars
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    rhombus(n);

    return 0;
}