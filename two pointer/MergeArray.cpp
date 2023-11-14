// https://leetcode.com/problems/merge-sorted-array/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    // vector<int> nums2 = {2, 5, 6};
    // int m = 3;
    // int n = 3;
    vector<int> nums1 = {0};
    vector<int> nums2 = {};
    int m = 0;
    int n = 0;

    int two = 0;
    for (int i = 0; i < m + n; i++)
    {
        if (!nums2.empty())
        {
            if (nums1[i] == 0)
            {
                nums1.insert(nums1.begin() + i, nums2[two]);
                two++;
            }
            else if (nums1[i] < nums2[two])
            {
                continue;
            }
            else
            {
                nums1.insert(nums1.begin() + i, nums2[two]);
                two++;
            }
        }
    }

    if (!nums1.empty())
    {
        for (int i = 0; i < n; i++)
        {
            nums1.pop_back();
        }
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i];
    }
}
