#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstNonRepeating(int arr[], int n)
{
    // Complete the function
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }
    for (auto x : umap)
    {
        cout << x.first << " " << x.second << endl;
    }
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        auto temp = umap.find(key);
        if (temp->second == 1)
        {
            return key;
        }
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << firstNonRepeating(arr, n) << endl;
    }
}
