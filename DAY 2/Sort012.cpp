//===>>Method 1
sort(nums.begin(), nums.end());

//==>>Method 2
// count sort
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int noZ = 0, noO = 0, noT = 0;
        int n = nums.size();

        for (int i(0); i < n; ++i)
        {
            if (nums[i] == 0)
            {
                noZ++;
            }
            else if (nums[i] == 1)
            {
                noO++;
            }
            else
            {
                noT++;
            }
        }
        nums.clear();
        while (noZ)
        {
            nums.push_back(0);
            noZ--;
        }
        while (noO)
        {
            nums.push_back(1);
            noO--;
        }
        while (noT)
        {
            nums.push_back(2);
            noT--;
        }
    }
};
//==>>Method 3

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int low = 0, high = nums.size() - 1, mid = 0;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
                mid++;
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};