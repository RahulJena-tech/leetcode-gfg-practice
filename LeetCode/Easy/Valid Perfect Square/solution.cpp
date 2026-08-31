class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num==0 || num==1) return true;
        if (num==2 || num==3) return false;

        for(long long i=2; i*i<=num; i++){
            if(i*i == num) return true;
        }
        return false;
    }
};