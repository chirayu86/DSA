 vector<int> help_classmate(vector<int> arr, int n) 
    { 
        vector<int> res(n,-1);
        stack<int> st;
        
        
        for(int i=n-1;i>=0;i--) {
            
            while(st.empty()==false && st.top()>arr[i]) {
                st.pop();
            }
            
            if(!st.empty()) {
                res[i] = st.top();
            }
            
            st.push(arr[i]);
        }
        
        return res;
    } 
