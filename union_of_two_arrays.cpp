

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int doUnion(int a[], int n, int b[], int m)
    {
        // code here
        unordered_map<int, int> umap;
        for (int i = 0; i < n; i++)
        {
        }
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
        cout << ob.doUnion(a, n, b, m) << endl;
    }

    return 0;
}
