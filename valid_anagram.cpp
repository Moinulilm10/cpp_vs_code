#include <iostream>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int sLen = s.size();
        int tLen = t.size();

        if (s == t)
            return true;

        if (sLen != tLen)
            return false;

        map<char, int> mp;

        for (int it = 0; it < sLen; it++)
        {
            mp[s[it]]++;
            mp[t[it]]--;
        }

        for (auto it : mp)
        {
            if (it.second)
                return false;
        }

        return true;
    }
};

int main()
{
    // Example usage of Solution class
    string s = "anagram";
    string t = "nagaram";

    Solution solution;
    bool result = solution.isAnagram(s, t);

    if (result)
    {
        cout << "The strings are anagrams." << endl;
    }
    else
    {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
