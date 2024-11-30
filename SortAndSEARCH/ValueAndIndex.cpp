vector<int> valueEqualToIndex(vector<int>& arr) {
        vector<int> res;
        
        for(int i=0;i<arr.size();i++) {
            if(arr[i]==i+1) {
                res.push_back(arr[i]);
            }
        }
        
        return res;
    }
