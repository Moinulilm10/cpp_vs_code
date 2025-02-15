#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> PosNegPair(int a[], int n)
    {
        vector<int> v, ans;
        map<int, int> orderedMap;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
                v.push_back(a[i]);
            else
                orderedMap[a[i]]++;
        }

        sort(v.begin(), v.end());

        for (int i = (int)v.size() - 1; i >= 0; i--)
        {
            int data = abs(v[i]);
            if (orderedMap[data] > 0)
            {
                ans.push_back(v[i]);
                ans.push_back(data);
                // orderedMap[data] -= 1;
            }
        }
        return ans;
    }
};

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
        Solution obj;
        vector<int> v = obj.PosNegPair(a, n);

        if (v.size() == 0)
            cout << "0";

        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}