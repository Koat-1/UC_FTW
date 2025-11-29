#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<double> res;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        res.push_back((double(a) * b / 2));
    }
    for (int i = 0; i < t; i++)
    {
        cout << fixed << setprecision(1) << res[i] << endl;
    }
    return 0;
};