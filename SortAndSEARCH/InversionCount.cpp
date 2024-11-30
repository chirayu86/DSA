    int inversionCount(vector<int> &arr) {
       int n = arr.size()-1;
       bool swapped;
       int count = 0;
       
       for(int i=0;i<n-1;i++) {
           swapped = false;
           for(int j =0;j<n-i-1;j++) {
               if(arr[j]>arr[j+1]){
                   swap(arr[j],arr[j+1]);
                   swapped = true;
                   count++;
               }
           }
           
           if(!swapped) {
               break;
           }
       }
       
       return count;
    }
