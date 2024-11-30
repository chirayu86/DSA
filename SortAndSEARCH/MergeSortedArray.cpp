vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    
    vector<int> result;
    int i = 0, j = 0;
    
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }
    
    
    while (i < n) {
        result.push_back(arr1[i]);
        i++;
    }
    
  
    while (j < m) {
        result.push_back(arr2[j]);
        j++;
    }
    
    return result;
}
