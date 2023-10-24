#include <bits/stdc++.h>
using namespace std;
int max_step(int r, int c, int m, int n, vector<vector<int>> v, vector<vector<int>> &dp)
{
    if (r == v.size() || c == v[0].size() || r <= 0)
        return 0;
    if (dp[r][c] != -1)
        return dp[r][c];
    int x = 0, y = 0, z = 0;
    if (r + 1 < m && c + 1 < n)
    {
        if (v[r + 1][c + 1] > v[r][c])
            x = 1 + max_step(r + 1, c + 1, m, n, v, dp);
    }
    if (c + 1 < n)
    {
        if (v[r][c + 1] > v[r][c])
            y = 1 + max_step(r, c + 1, m, n, v, dp);
    }
    if (r - 1 >= 0 && c + 1 < n)
    {
        if (v[r - 1][c + 1] > v[r][c])
            z = 1 + max_step(r - 1, c + 1, m, n, v, dp);
    }
    return dp[r][c] = max(x, max(y, z));
}
void solution()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v;
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    for (int i = 0; i < m; i++)
    {
        vector<int> a;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        v.push_back(a);
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int w = max_step(i, 0, m, n, v, dp);
        ans = max(ans, w);
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
