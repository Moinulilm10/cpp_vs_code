#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstRepeated(int arr[], int n)
    {
        unordered_map<int, int> umap;

        for (int i = 0; i < n; i++)
            umap[arr[i]]++;

        for (int i = 0; i < n; i++)
        {
            int key = arr[i];
            auto temp = umap.find(key);
            int value = temp->second;
            if (value > 1)
                return i + 1;
        }

        return -1;
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

        int arr[n];

        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}