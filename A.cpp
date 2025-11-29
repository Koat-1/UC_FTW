#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int res1 = 1;
    int res2;
    vector<int> compute1;

    while (nums.size() != 1)
    {
        compute1.clear();
        for (int i = 0; i + 1 < nums.size(); i += 2)
        {
            int temp = gcd(nums[i], nums[i + 1]);
            compute1.push_back(temp);
        }

        if (nums.size() % 2 == 1)
            compute1.push_back(nums.back());
        nums = compute1;
    }
    res2 = nums[0];

    cout << res1 << endl;
    cout << res2 << endl;
    return 0;
}