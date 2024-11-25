
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;

        for(int i=0;i<nums.size();i++) {
            int prod = 1;
            for(int j = nums.size()-1;j>i;j--) {
                prod = prod * nums[j];
            }

            res.push_back(prod);
        }

        return res;
    }

