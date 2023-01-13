#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

void solve()
{
    vector<int> v = {24, 36, 47, 49, 22, 12, 21};
    sort(v.begin(), v.end());
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


##Question 2


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int left=0;
        int right = nums.size()-1;
        
        while (left <= right ){
            if(abs(nums[left])> abs(nums[right])){
                ans.push_back(nums[left] * nums[left]);
                left++;
            }
            else if( abs(nums[left])<=abs(nums[right])){
                ans.push_back(nums[right]* nums[right]);
                right--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


##Question 3

--->Approach 1
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
    int n = nums.size();
    vector<int> Even;
    vector<int> odd;
    vector<int> ans;
    for (int i(0); i < n; i++)
    {
        if (nums[i] % 2 == 0)
        {
            Even.push_back(nums[i]);
        }
        else
        {
            odd.push_back(nums[i]);
        }
    }
    ans.insert(ans.begin(), Even.begin(), Even.end());
    ans.insert(ans.end(),odd.begin(),odd.end());

    return ans;
    }
};

-->Approach 2
two pointers Approach

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n =nums.size();
        vector<int>ans(n);
        int left(0), right(n-1);
        for(int i(0);i<n;i++){
            if(nums[i]%2==0){
                ans[left]= nums[i];
                left++;
            }
            else{
                ans[right]= nums[i];
                right--;
            }
        }
        return ans;
    }
};

-->Approach 3

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
    int n = nums.size();
    int count = 0;
    for (int i(0); i < n; i++)
    {
        if (nums[i] % 2 == 0)
        {
            swap(nums[i],nums[count]);
            count++;
        }
    }
    return nums;
    }
};



==>Question 4
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        
        while(mid <= high)
        {
            switch(nums[mid])
            {
                case 0: swap(nums[low++], nums[mid++]); break;
                
                case 1: mid++; break;
                
                case 2: swap(nums[mid], nums[high--]); break;
            }
        }
    }
};

