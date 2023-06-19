#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

void Pattern1()
{
    int n;
    cin >> n;
    for (int i(0); i < n; i++)
    {
        for (int j(0); j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void Pattern2()
{
    int n(0);
    cin >> n;
    for (int i(1); i <= n; i++)
    {
        for (int j(1); j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void Pattern3()
{
    int n(0);
    cin >> n;
    for (int i(1); i <= n; i++)
    {
        for (int j(1); j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void Pattern4()
{
    int n(0);
    cin >> n;
    for (int i(1); i <= n; i++)
    {
        for (int j(1); j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void Pattern5()
{
    int n(0);
    cin >> n;
    for (int i(0); i < n; i++)
    {
        for (int j(n); j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void Pattern6()
{
    int n(0);
    cin >> n;
    for (int i(0); i < n; i++)
    {
        for (int j(n); j > i; j--)
        {
            cout << (n + 1) - j;
        }
        cout << endl;
    }
}

void Pattern7()
{
    int n(1);
    cin >> n;
    for (int i(1); i <= n; i++)
    {
        // Spaces
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // Star
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern8()
{
    int n(1);
    cin >> n;
    for (int i(0); i < n; i++)
    {
        for (int j(0); j < i; j++)
        {
            cout << " ";
        }
        for (int j(0); j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern9()
{
    int n = 1;
    cin >> n;
    for (int i(1); i <= n; i++)
    {
        // Spaces
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // Star
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i(0); i < n; i++)
    {
        for (int j(0); j < i; j++)
        {
            cout << " ";
        }
        for (int j(0); j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern10()
{
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Pattern11()
{
    int n = 0;
    cin >> n;
    int digit = 1;
    for (int i(0); i < n; i++)
    {
        if (i % 2 == 0)
            digit = 1;
        else
            digit = 0;
        for (int j(0); j <= i; j++)
        {
            cout << digit;
            digit = 1 - digit;
        }
        cout << endl;
    }
}

void Pattern12()
{
    int n = 0;
    cin >> n;
    int spaces = 2 * (n - 1);
    for (int i(1); i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j(1); j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j(i); j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        spaces -= 2;
    }
}

void Pattern13()
{
    int n = 0;
    cin >> n;
    int count = 1;
    for (int i(1); i <= n; i++)
    {
        for (int j(1); j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
void Pattern14()
{
    int n = 0;
    cin >> n;
    char letter = 'A';
    for (int i(1); i <= n; i++)
    {
        for (int j(1); j <= i; j++)
        {
            cout << letter << " ";
            letter = int(letter) + 1;
        }
        cout << endl;
        letter = 'A';
    }
}

void Pattern21()
{
    int n = 0;
    cin >> n;
    for (int i(1); i <= n; i++)
    {
        for (int j(1); j <= n; j++)
        {
            if ((i == 1 || i == n) || (j == 1 || j == n))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    // Pattern1();
    // Pattern2();
    // Pattern3();
    // Pattern4();
    // Pattern5();
    // Pattern6();
    // Pattern7();
    // Pattern8();
    // Pattern9();
    // Pattern10();
    // Pattern11();
    // Pattern12();
    // Pattern13();
    // Pattern14();
    Pattern21();

    return 0;
}