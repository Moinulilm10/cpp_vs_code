#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        // Your code goes here
        unordered_set<int> uset;

        for (int i = 0; i < n; i++)
        {
            uset.insert(a[i]);
        }

        int count = 0;

        for (int i = 0; i < m; i++)
        {
            int key = b[i];

            if (uset.find(key) != uset.end())
            {
                count++;
                uset.erase(key);
            }
        }
        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}