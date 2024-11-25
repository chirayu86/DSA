
class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        int temp = n;
        int sum = 0;
        
        while(temp!=0) {
            int t = temp%10;
            sum += t;
            temp = temp/10;
        }
        
        int rev = 0;
        int temp2 = sum;
        
        while(temp2!=0) {
            int t2 = temp2%10;
            rev = rev*10 + t2;
            temp = temp/10;
        }
        
        if(sum==rev) {
            return 1;
        } else {
            return 0;
        }
    }
};
