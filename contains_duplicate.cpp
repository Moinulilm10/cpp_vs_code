#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> mp;

        for (int i : nums)
        {
            mp[nums[i]]++;
        }

        for (auto it : mp)
        {
            if (it.second > 1)
            {
                return true;
            }
        }

        return false;
    }
};

int main()
{
    // Example usage of Solution class
    vector<int> nums = {1, 2, 3}; // Example input

    Solution solution;
    bool result = solution.containsDuplicate(nums);

    if (result)
    {
        cout << "The array contains duplicate elements." << endl;
    }
    else
    {
        cout << "The array does not contain duplicate elements." << endl;
    }

    return 0;
}
