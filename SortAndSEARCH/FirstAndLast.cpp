vector<int> findFirstAndLastPosition(const vector<int>& nums, int target) {
    int first = -1, last = -1;
    int left = 0, right = nums.size() - 1;

    // Binary search to find both first and last positions
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            // Update both first and last
            first = mid;
            last = mid;

            // Expand outwards to find boundaries
            int tempLeft = mid - 1;
            int tempRight = mid + 1;

            while (tempLeft >= 0 && nums[tempLeft] == target) {
                first = tempLeft;
                tempLeft--;
            }

            while (tempRight < nums.size() && nums[tempRight] == target) {
                last = tempRight;
                tempRight++;
            }

            break; // Exit after finding both boundaries
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return {first, last};
}
