// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int placeholder = 0;

    for(int i = 1; i < nums.size(); ++i){
        if(nums[placeholder] == nums[i]){
            continue;
        }else{
            swap(nums[placeholder+1], nums[i]);
            placeholder++;
        }
    }
    cout<<placeholder + 1;
}
