class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = 1;
        int n = size(nums);
        if(n==1){
            if(target<=nums[0]) return 0;
            else if(target>nums[0]) return 1;
        }
        while(r<n){
            if(nums[l]==target){
                return l;
            }else if(nums[r]==target){
                return r;
            }else if(nums[l]<target && nums[r]>target){
                return r;
            }else if(target<nums[l]){
                return l;
            }
            else{
                l++;
                r++;
            }
        }
        return r;
    }
};