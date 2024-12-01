int maxSumSubarray(const vector<int>& arr) {
    int max_sum = INT_MIN; // Initialize maximum sum to the smallest integer
    int current_sum = 0;   // Initialize current sum

    for (int num : arr) {
        current_sum = max(num, current_sum + num); // Include the current element in the subarray
        max_sum = max(max_sum, current_sum);       // Update the maximum sum if needed
    }

    return max_sum;
}
