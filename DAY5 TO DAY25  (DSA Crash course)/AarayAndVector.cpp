
// Question 1

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> ans(0, n);
    vector<int>::iterator it;
    for (int i(1); i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        ans.push_back(abs(a - b));
    }
    it = max_element(ans.begin(), ans.end());
    cout << (it + 1) - ans.begin() << " " << *it << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    solve();
}

// Question 2

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    bool IsPerfect(int a[], int n)
    {
        // Complete the function
        int kahaTak = 0;
        if (n % 2 == 0)
        {
            kahaTak = n / 2;
        }
        else
        {
            kahaTak = (n - 1) / 2;
        }
        int start = 0;
        if (n >= 2)
        {
            for (int i(n - 1); i >= kahaTak; i--, start++)
            {
                if (a[start] != a[i])
                {
                    return false;
                }
            }
        }
        else
        {
            for (int i(n - 1); i > kahaTak; i--, start++)
            {
                if (a[start] != a[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        if (ob.IsPerfect(a, n))
            cout << "PERFECT\n";
        else
            cout << "NOT PERFECT\n";
    }
}
// } Driver Code Ends

// Question 3
