#include <bits/stdc++.h>
using namespace std;

long long findX(long long X)
{
    double A = (-3.0 + sqrt(9.0 + 4.0 * X)) / 2.0;
    return (long long)ceil(A);
}

int main()
{
    int q;
    cin >> q;
    vector<int> ans;
    while (q--)
    {
        long long n, m;
        cin >> n >> m;

        long long left = 0, right = n, res = 0;
        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long A = findX(mid);
            if (mid * A <= m)
            {
                res = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        ans.push_back(res);
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
};