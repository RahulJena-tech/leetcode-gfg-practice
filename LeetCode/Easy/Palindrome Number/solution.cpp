class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0)) return false;
        long long temp = 0;
        int real = x;
        while(x>0){
            int digit = x%10;
            temp = temp*10+digit;
            x/=10;
        }
        return temp==real;
    }
};