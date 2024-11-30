int search(int arr[], int n, int x, int k) 
{ 
    
    int i = 0; 
    while (i < n) 
    { 
        // If x is found at index i 
        if (arr[i] == x) 
            return i; 
  

        i = i + max(1, abs(arr[i]-x)/k); 
    } 
  
    cout << "number is not present!"; 
    return -1; 
} 
