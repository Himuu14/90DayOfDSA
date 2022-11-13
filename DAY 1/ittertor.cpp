#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

void solve()
{
    vector<int> v = {12, 13, 14, 15, 26, 2, 7, 245, 234, 224, 234, 244, 2345, 999, 2000};
    for (int i(0); i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

//Best way
    for (auto it : v)
    {
        cout << it << " ";
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



