#include <bits/stdc++.h>

using namespace std;
int main()
{
    int cases, n, temp;
    bool isParity;
    vector<int> nums;

    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        isParity = true;
        nums.clear();
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            nums.push_back(temp);
        }
        vector<int> temp_nums(nums.begin(), nums.end());
        sort(nums.begin(), nums.end());

        for (int j = 0; j < n; j++)
        {
            if (temp_nums[j] % 2 != nums[j] % 2)
            {
                isParity = false;
                break;
            }
        }
        if (isParity)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
