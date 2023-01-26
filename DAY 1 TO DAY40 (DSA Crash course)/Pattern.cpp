// Basics tho ye hi hai ki hum dektai hai har row mai kya ho raha hai ye hum inner loop mai lagatai hai or outer loop vho chij kitni bhar ho rahi hai ye deknai kai kaam aata hai
  


==>Question 1 (Square pattern)


#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

void solve()
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
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    solve();
    return 0;
}


==>Question 2(Hollow square)
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

void solve()
{
    int n;
    cin >> n;
    for (int i(0); i < n; i++)
    {
        for (int j(0); j < n; j++)
        {
            if (i == 0 || j == 0 || i == (n - 1) || j == (n - 1))
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
    solve();
    return 0;
}

==>Question 3
