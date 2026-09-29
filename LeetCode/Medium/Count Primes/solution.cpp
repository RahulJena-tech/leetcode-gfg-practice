class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        vector<char> res(n, true);
        int count=n-2;
        for(int i=2; i*i<n; i++){
            if(res[i]){
                for(int j=i*i; j<n; j+=i){
                    if(res[j]){
                        res[j]=false;
                        count--;
                    }
                }
            }
        }
        return count;
    }
};