bool hasPairWithDifference(const vector<int>& arr, int x) {
    if (arr.size() < 2) return false; 

    vector<int> sortedArr = arr;  
    sort(sortedArr.begin(), sortedArr.end());  
    
    int i = 0, j = 1;
    while (j < sortedArr.size()) {
        int diff = sortedArr[j] - sortedArr[i];
        
        if (diff == x) {
            return true; 
        } else if (diff < x) {
            ++j; 
        } else {
            ++i;  
            if (i == j) {
                ++j;  
            }
        }
    }
    
    return false;  // No such pair found
}
