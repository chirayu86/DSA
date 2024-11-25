class Solution {
  public:
    int isPerfectNumber(int n) {
        int root = sqrt(n);
        int sum = 1;
        
        for(int i=2;i<=root;i++) {
            
            if(n%i==0) {
                if(i*i!=n) {
                int temp = n/i;
                sum += i + temp; } else {
                    sum = sum + i;
                }
            }
        }
        
        if(sum==n) {
            return true;
        } else {
            return false;
        }
    }
};
