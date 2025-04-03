#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[1001][1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int h1 = 0, h2 = n - 1;
    int c1 = 0, c2 = n - 1;
    int cur = n * n;
    while (h1 <= h2 && c1 <= c2)
    {
        for (int i = c1; i <= c2; i++)
        {
            a[h1][i] = cur;
            cur--;
        }
        h1++;
        for (int i = h1; i <= h2; i++)
        {
            a[i][c2] = cur;
            cur--;
        }
        c2--;
        for (int i = c2; i >= c1; i--)
        {
            a[h2][i] = cur;
            cur--;
        }
        h2--;
        for (int i = h2; i >= h1; i--)
        {
            a[i][c1] = cur;
            cur--;
        }
        c1++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}