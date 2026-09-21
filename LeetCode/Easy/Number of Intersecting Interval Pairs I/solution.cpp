class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        
        for (int i = 0; i < intervals.size(); i++) {
            for (int j = i + 1; j < intervals.size(); j++) {
                
                int l1 = intervals[i][0];
                int r1 = intervals[i][1];
                int l2 = intervals[j][0];
                int r2 = intervals[j][1];
                
                if (max(l1, l2) <= min(r1, r2)) {
                    count++;
                }
            }
        }
        
        return count;
    }
};