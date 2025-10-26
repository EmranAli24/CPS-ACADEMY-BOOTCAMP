#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int cnt = -1;
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2])
            {
                cnt = arr[i];
            }
        }

        cout << cnt << endl;
    }
    return 0;
}