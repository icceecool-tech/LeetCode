class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int sum =0;
        int num = n;
        while(n!=0){
            int lastDigit = n%10;
            sum = sum + lastDigit*lastDigit*lastDigit;
            n/=10;
        }
        if(num==sum) return 1;
        else return 0;
    }
};