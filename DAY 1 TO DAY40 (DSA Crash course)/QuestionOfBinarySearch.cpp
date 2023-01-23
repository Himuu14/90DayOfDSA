== > Question 1

        int n = nums.size();
int s = 0, e = n - 1;
while (s <= e)
{
    int mid = (s + e) / 2;
    if (nums[mid] == target)
    {
        return mid;
    }
    else if (nums[mid] > target)
    {
        e = mid - 1;
    }
    else
    {
        s = mid + 1;
    }
}
return -1;
}

== > Question 2

        class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int start = 0, start1 = 0, end = nums.size() - 1, end1 = nums.size() - 1;
        vector<int> ans;
        int first = -1, last = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                first = mid;
                end = mid - 1;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        ans.push_back(first);
        while (start1 <= end1)
        {
            int mid = start1 + (end1 - start1) / 2;
            if (nums[mid] == target)
            {
                last = mid;
                start1 = mid + 1;
            }
            else if (nums[mid] < target)
            {
                start1 = mid + 1;
            }
            else
            {
                end1 = mid - 1;
            }
        }
        ans.push_back(last);
        return ans;
    }
};

== > Approach 2

        class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        return {BinarySearch(nums, target, "FIRST"), BinarySearch(nums, target, "LAST")};
    }

    int BinarySearch(vector<int> nums, int num, string find)
    {
        int left = 0, right = nums.size() - 1, mid;
        int result = -1;

        while (left <= right)
        {
            mid = (left + right) / 2;

            if (nums[mid] == num)
            {
                result = mid;
                (find == "FIRST") ? right = mid - 1 : left = mid + 1;
            }
            else if (nums[mid] > num)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return result;
    }
};

== > Approach 3

        vector<int>
        searchRange(vector<int> &nums, int target)
{
    int idx1 = lower_bound(nums, target);
    int idx2 = lower_bound(nums, target + 1) - 1;
    if (idx1 < nums.size() && nums[idx1] == target)
        return {idx1, idx2};
    else
        return {-1, -1};
}

int lower_bound(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int mid = (r - l) / 2 + l;
        if (nums[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return l;
}

== > Question 3 class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        int ans = nums[0];
        for (int i(1); i < n; i++)
        {
            ans ^= nums[i];
        }
        return ans;
    }
};

== Approach 2
