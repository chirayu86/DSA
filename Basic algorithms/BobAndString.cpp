
int minOperationsToMakeAnagrams(string S, string T) {
unordered_map<char, int> freqS, freqT;

    // Count frequencies of characters in S
    for (char c : S) {
        freqS[c]++;
    }

    // Count frequencies of characters in T
    for (char c : T) {
        freqT[c]++;
    }

    int operations = 0;

    // Process characters in S
    for (auto& [charS, countS] : freqS) {
        if (freqT.count(charS)) {
            // If the character exists in T, calculate the difference
            operations += abs(countS - freqT[charS]);
            freqT.erase(charS); // Remove processed character
        } else {
            // If character is missing in T, all occurrences need to be added
            operations += countS;
        }
    }

    // Process remaining characters in T
    for (auto& [charT, countT] : freqT) {
        operations += countT; // All occurrences need to be removed
    }

    return operations;
}
