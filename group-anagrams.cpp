// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <string>
// #include <algorithm>

// using namespace std;

// class Solution
// {
// public:
//     vector<vector<string>> groupAnagrams(vector<string> &strs)
//     {
//         vector<vector<string>> ans;
//         unordered_map<string, vector<string>> umap;

//         for (auto x : strs)
//         {
//             string temp = x;
//             sort(x.begin(), x.end());
//             umap[x].push_back(temp);
//         }
//         for (auto x : umap)
//         {
//             ans.push_back(x.second);
//         }

//         return ans;
//     }
// };

// int main()
// {
//     Solution sol;
//     vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
//     vector<vector<string>> ans = sol.groupAnagrams(strs);

//     for (auto anagramGroup : ans)
//     {
//         for (auto word : anagramGroup)
//         {
//             cout << word << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> umap;

        for (auto x : strs)
        {
            string temp = x;
            sort(temp.begin(), temp.end());
            umap[temp].push_back(x);
        }

        for (auto x : umap)
        {
            ans.push_back(x.second);
        }

        return ans;
    }
};

int main()
{
    // Example usage of Solution class
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    Solution solution;
    vector<vector<string>> result = solution.groupAnagrams(strs);

    cout << "Grouped Anagrams: " << endl;
    for (auto group : result)
    {
        cout << "[ ";
        for (string str : group)
        {
            cout << str << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
