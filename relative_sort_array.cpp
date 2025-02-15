#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        vector<int> ans;
        map<int, int> mp;

        // Count occurrences of elements in arr1
        for (int i = 0; i < arr1.size(); i++)
        {
            mp[arr1[i]]++;
        }

        // Process elements from arr2
        for (auto temp : arr2)
        {
            if (mp.find(temp) != mp.end())
            {
                auto x = mp.find(temp);
                int count = x->second;

                // Insert the current element count times into ans
                vector<int> v(count, temp);
                ans.insert(ans.end(), v.begin(), v.end());

                // Remove the element from the map
                mp.erase(temp);
            }
        }

        // Process remaining elements in arr1
        for (auto x : mp)
        {
            int ele = x.first;
            int count = x.second;

            // Insert the current element count times into ans
            vector<int> v(count, ele);
            ans.insert(ans.end(), v.begin(), v.end());
        }

        return ans;
    }
};

int main()
{
    // Example usage of Solution class
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2 = {2, 1, 4, 3, 9, 6};

    Solution solution;
    vector<int> result = solution.relativeSortArray(arr1, arr2);

    cout << "Relative sorted array: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
