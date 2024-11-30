#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to count subarrays with sum equal to 0
int countSubarraysWithSumZero(const vector<int>& arr) {
    unordered_map<int, int> prefixSumMap;  // HashMap to store prefix sums and their frequencies
    int prefixSum = 0;  // Initialize prefix sum
    int count = 0;  // Count of subarrays with sum 0
    
    // Iterate through the array
    for (int num : arr) {
        // Update the prefix sum
        prefixSum += num;
        
        // If prefix sum is 0, we found a subarray from the start to the current index
        if (prefixSum == 0) {
            count++;
        }
        
        // If prefix sum has been seen before, it means there are subarrays with sum 0
        if (prefixSumMap.find(prefixSum) != prefixSumMap.end()) {
            count += prefixSumMap[prefixSum];
        }
        
        // Store the frequency of the current prefix sum
        prefixSumMap[prefixSum]++;
    }
    
    return count;
}

// Main function
int main() {
    vector<int> arr = {6, -1, 3, -2, 2, -3, 3};
    cout << "Total count of subarrays with sum 0: " << countSubarraysWithSumZero(arr) << endl;
    return 0;
}
