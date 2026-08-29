class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = size(word1);
        int m = size(word2);
        int s = min(n,m);
        string z = "";
        for(int i=0; i<s; i++){
            z = z+word1[i]+word2[i];
        }
        if (n > m) {
            for (int i = s; i < n; i++) {
                z = z + word1[i];
            }
        }
        else if (m > n) {
            for (int i = s; i < m; i++) {
                z = z + word2[i];
            }
        }
        return z;
    }
};