#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }

    int sereja = 0, dima = 0, step = 1;

    int left = 0, right = n - 1;
    while (left <= right)
    {
        if (step % 2 == 1)
        {
            if (vc[left] > vc[right])
            {
                sereja += vc[left];
                left++;
            }
            else
            {
                sereja += vc[right];
                right--;
            }
        }
        else
        {
            if (vc[left] > vc[right])
            {
                dima += vc[left];
                left++;
            }
            else
            {
                dima += vc[right];
                right--;
            }
        }
        step++;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}