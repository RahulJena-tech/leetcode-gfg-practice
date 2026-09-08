class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long lsum=0;
        long long rsum=0;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            rsum+=nums[i];
        }
        for(int j=0; j<nums.size()-1; j++){
            lsum+=nums[j];
            rsum-=nums[j];
            if(lsum>=rsum) count++;
        }
        return count;
    }
};