class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int res=0;
        for(int i=0; i<n;i++){
            int temp = int(s[i])-96;
            int val = 27-temp;
            res+=(val*(i+1));
        }
        return res;
    }
};