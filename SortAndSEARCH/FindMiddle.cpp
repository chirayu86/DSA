int findMiddle(int A, int B, int C) {
    if ((A > B && A < C) || (A < B && A > C)) {
        return A;  
    } else if ((B > A && B < C) || (B < A && B > C)) {
        return B;  
    } else {
        return C;  
    }
}
