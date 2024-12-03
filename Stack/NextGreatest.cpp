    vector<int> nextLargerElement(vector<int>& arr) {
        
        vector<int> res;
        stack<int> temp;
        
        stack.push(arr[0]);
        
        
        for(int i=1;i<arr.size();i++) {
            
         if (temp.empty()) {
            temp.push(arr[i]);
            continue;
            }
            
            
            
            if(arr[i]>temp.top()) {
                res.push_back(arr[i]);
                temp.pop();
                temp.push(arr[i]);
            } 
            
        }
        
        
        
        
    }
