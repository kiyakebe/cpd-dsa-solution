class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int one = m-1, two = n-1, k=m+n-1;        
        while(two >= 0){
            if(one >=0 && nums1[one] > nums2[two]){
                nums1[k--] = nums1[one--];
            }else{
                nums1[k--] = nums2[two--];
            }
        }
    }
};