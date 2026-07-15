class Solution {
  public:
    bool isPrime(int n) {
        int found=0;
        if(n>1000000000|| n<=1) return 0;
        for(int i =2; i<n; i++){
            if(n%i==0){
                found = 1;
                break;
            }
        }
        if(found==1) return 0;
        else return 1;
        
    }
};
