class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=size(nums);
        vector<int> a;
        for(int i=0; i<n-1; i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]+nums[i]==target){
                    a={i,j};
                    return a;
                }
            }
        }return a;
    }
};