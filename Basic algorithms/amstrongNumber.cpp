class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum = 0;
        int res = n;
        
        while(n!=0) {
            int temp = n%10;
            sum += temp*temp*temp;
            n = n/10;
        }
        
        if(res==sum) {
            return true ;
        } else {
            return false;
        }
    }
};
