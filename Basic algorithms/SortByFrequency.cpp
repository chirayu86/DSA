string frequencySort(string s) {
    // Step 1: Count the frequency of each character
    unordered_map<char, int> freqMap;
    for (char c : s) {
        freqMap[c]++;
    }

    // Step 2: Store characters and their frequencies in a vector
    vector<pair<char, int>> freqVector(freqMap.begin(), freqMap.end());

    // Step 3: Sort the vector by frequency in descending order
    sort(freqVector.begin(), freqVector.end(), [](pair<char, int>& a, pair<char, int>& b) {
        return a.second > b.second; // Sort by frequency in descending order
    });

    // Step 4: Build the result string
    string result;
    for (auto& [ch, freq] : freqVector) {
        result += string(freq, ch); // Append the character `freq` times
    }

    return result;
}
