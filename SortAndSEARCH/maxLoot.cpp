int maxLoot(const vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;  // No houses to loot
    if (n == 1) return arr[0];  // Only one house to loot

    // Create a dp array to store the maximum loot at each house
    vector<int> dp(n);
    
    // Base cases
    dp[0] = arr[0];  // Only one house, loot it
    dp[1] = max(arr[0], arr[1]);  // Choose the max of the first two houses
    
    // Fill the dp array for the rest of the houses
    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i-1], arr[i] + dp[i-2]);
    }
    
    return dp[n-1];  // Maximum loot at the last house
}
