#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2, t;
    cin >> x1 >> y1 >> x2 >> y2 >> t;

    if (x1 != x2)
    {
        if (t == 1)
            cout << "Ayumi" << endl;
        else
            cout << "Mitsuhiko" << endl;
    }
    else
    {

        int d = y1 - y2;

        string winner;
        if (d % 2 == 0)
            winner = (t == 1) ? "Mitsuhiko" : "Ayumi";
        else
            winner = (t == 1) ? "Ayumi" : "Mitsuhiko";

        cout << winner << endl;
    }
    return 0;
}
