class Solution {
public:
    string largestOddNumber(string num) {
        int n=size(num);
        int i=0;
        while(i<n && num[i]=='0') i++;
        int j=n-1;
        while(i<=j && (num[j]-'0')%2==0) j--;
        if(i>j || j<0) return "";
        return num.substr(i,j-i+1);
    }
};