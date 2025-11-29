#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<string, string> place_zone;
    for (int i = 0; i < n; i++)
    {
        string place, zone;
        cin >> place >> zone;
        place_zone[place] = zone;
    }
    int q;
    cin >> q;
    unordered_map<string, int> zone_crimes;
    for (int i = 0; i < q; i++)
    {
        string place;
        int a;
        cin >> place >> a;
        zone_crimes[place_zone[place]] += a;
    }

    int mx = 0;
    string res;
    for (auto &p : zone_crimes)
    {
        if (p.second > mx)
        {
            mx = p.second;
            res = p.first;
        }
    }
    cout << res << endl;
    return 0;
}