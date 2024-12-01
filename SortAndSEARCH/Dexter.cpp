int findKthSmallest(const vector<pair<int, int>>& ranges, int k) {
    set<int> distinctNumbers;
    
    // Collect distinct numbers from all ranges
    for (const auto& range : ranges) {
        for (int num = range.first; num <= range.second; num++) {
            distinctNumbers.insert(num);
        }
    }
    
    // Convert set to sorted vector
    vector<int> sortedNumbers(distinctNumbers.begin(), distinctNumbers.end());
    
    // Check if k is valid
    if (k > 0 && k <= sortedNumbers.size()) {
        return sortedNumbers[k - 1];  // Return the K-th smallest number
    } else {
        return -1;  // Invalid K
    }
}
