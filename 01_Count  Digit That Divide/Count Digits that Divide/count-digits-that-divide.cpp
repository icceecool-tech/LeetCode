class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int cnt=0;
        int num = n;
        // code here
        while(n!=0){
            int lastDigit = n%10;
            if(lastDigit !=0 && num % lastDigit ==0){
                cnt++;
            }
            n/=10;
        }
        return cnt;
    }
};