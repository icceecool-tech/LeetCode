class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0,num = x;
        if(x<0) return 0;
        while(x!=0){
            int rem = x%10;
            if(rev>INT_MAX/10 ||rev<INT_MIN/10) return 0;
            rev = rev*10+rem;
            x/=10;
        }
        if(num==rev) return 1;
        else return 0;
    }
};