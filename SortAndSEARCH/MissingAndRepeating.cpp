void findMissingAndRepeated(const vector<int>& arr, int n) {
    long long sum_n = (n * (n + 1)) / 2;
    long long sum_n_sq = (n * (n + 1) * (2 * n + 1)) / 6;
    
    long long sum_actual = 0, sum_sq_actual = 0;
    
    for (int i = 0; i < n; i++) {
        sum_actual += arr[i];
        sum_sq_actual += (long long)arr[i] * arr[i];
    }
    
    // Using the equations to find a and b
    long long diff_sum = sum_n - sum_actual; // a - b
    long long diff_sum_sq = sum_n_sq - sum_sq_actual; // a^2 - b^2
    
    // a^2 - b^2 = (a - b) * (a + b), so we can find (a + b)
    long long sum_ab = diff_sum_sq / diff_sum; // a + b
    
    // Now solve the system of equations:
    // a - b = diff_sum
    // a + b = sum_ab
    long long a = (diff_sum + sum_ab) / 2;
    long long b = a - diff_sum;
    
    return [a,b]
}
