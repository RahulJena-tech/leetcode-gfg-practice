class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = size(s);
        int l = 0;
        int r = n-1;
        while(l<r){
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
};