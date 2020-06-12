class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int m=0;
        int r=nums.size()-1;
        while(m<=r)
        {
            if(nums[m]==0)
            {
                int t=nums[l];
                nums[l]=nums[m];
                nums[m]=t;
                l++;
                m++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else
            {
                int t=nums[r];
                nums[r]=nums[m];
                nums[m]=t;
                r--;
            }
        }
    }
};