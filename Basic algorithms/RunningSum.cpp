class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;

        for(int i=0;i<nums.size();i++) {
            int rSum = 0;
             for(int j=0;j<=i;j++) {
                rSum += nums[j];
             }
             res.push_back(rSum);
        }

        return res;
    }
};
