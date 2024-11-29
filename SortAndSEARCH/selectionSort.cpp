   void selectionSort(vector<int> &arr) {
        
        int size = arr.size();
        for(int i=0;i<size-1;i++) {
            int min_indx = i;
            for(int j=i+1;j<size;j++) {
                if(arr[j]<arr[min_indx]) {
                    min_indx = j;
                }
            }
            
            swap(arr[i],arr[min_indx]);
        }
    }
