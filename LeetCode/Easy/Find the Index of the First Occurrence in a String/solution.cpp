class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = size(haystack);
        int m = size(needle);
        if(m>n) return -1;
        int o = n-m;
        int ans=0;
        for(int i=0; i<=o; i++){
            int j = 0;

            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }

            if (j == m)
                return i;
        }

        return -1;
        }
};