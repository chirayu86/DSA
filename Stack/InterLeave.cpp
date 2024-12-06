void interleaveQueue(queue<int>& q) {
    int n = q.size();
    if (n % 2 != 0) {
        cout << "Queue size must be even to interleave." << endl;
        return;
    }

    queue<int> firstHalf;
    int halfSize = n / 2;

    // Step 1: Split the queue into two halves
    for (int i = 0; i < halfSize; ++i) {
        firstHalf.push(q.front());
        q.pop();
    }

    // Step 2: Interleave the elements from the two halves
    while (!firstHalf.empty()) {
        q.push(firstHalf.front());
        firstHalf.pop();

        q.push(q.front());
        q.pop();
    }
}
