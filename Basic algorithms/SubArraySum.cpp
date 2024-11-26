vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        vector<int> res;
  
    for (int i = 0; i <= arr.size() - k; i++) {
      
        // Find maximum of subarray beginning
        // with arr[i]
        int max = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        res.push_back(max);
    }
  
    return res;
    }
