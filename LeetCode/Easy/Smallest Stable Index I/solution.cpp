class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> a;
        deque<int> b(nums.begin(), nums.end());
        int n = size(nums);
        int max_A=INT_MIN;
        for(int i =0; i<n; i++){
            a.push_back(nums[i]);
            max_A=max(max_A, nums[i]);
            int min_B=*min_element(b.begin(), b.end());
            if(max_A-min_B <=k){
                return i;
            }
            b.pop_front();
        }
        return -1;
    }
};