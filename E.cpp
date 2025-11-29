#include <bits/stdc++.h>
using namespace std;

unsigned long long mod_string(const string &n_str, unsigned long long mod)
{
    unsigned long long res = 0;
    for (char c : n_str)
    {
        res = (res * 10 + (c - '0')) % mod;
    }
    return res;
}

int main()
{
    string n_str;
    cin >> n_str;

    int best_k = 0, best_t = 0;
    unsigned long long best_x = 0;

    unsigned long long powers_of_3[3] = {1, 3, 9};

    for (int k = 0; k <= 18; k++)
    {
        unsigned long long pow2 = 1ULL << k;
        for (int t = 0; t <= 2; t++)
        {
            unsigned long long s = pow2 * powers_of_3[t];
            unsigned long long rem = mod_string(n_str, s);
            if (rem == 0 && s > best_x)
            {
                best_x = s;
                best_k = k;
                best_t = t;
            }
        }
    }

    cout << best_k << " " << best_t;
    return 0;
}
