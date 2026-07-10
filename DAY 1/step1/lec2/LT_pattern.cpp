#include <bits/stdc++.h>
using namespace std;

void rhombus(int n)
{
    // Top half
    for(int i = 1; i <= n; i++)
    {
        // Stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // Bottom half (starts from n to repeat the middle row)
    for(int i = n-1; i >= 1; i--)
    {
        // Stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
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