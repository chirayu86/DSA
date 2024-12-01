int countTrailingZeroes(int x) {
    int count = 0;
    for (int i = 5; x / i > 0; i *= 5) {
        count += x / i;
    }
    return count;
}

// Function to find the smallest number whose factorial has at least n trailing zeroes
int findSmallestNumber(int n) {
    if (n == 0) {
        return 0; // 0! = 1 has 0 trailing zeroes
    }

    int low = 1, high = 5 * n, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int zeroes = countTrailingZeroes(mid);

        if (zeroes >= n) {
            result = mid; // Potential candidate
            high = mid - 1; // Try for a smaller number
        } else {
            low = mid + 1; // Increase the range
        }
    }

    return result;
}
