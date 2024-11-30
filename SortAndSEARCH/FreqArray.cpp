  int majorityElement(vector<int>& arr) {
        
          int size = arr.size()/2;
          unordered_map<int, int> freqMap; 
          
          for(int num : arr) {
              freqMap[num]++;
          }
          
    int highestFreqElement = -1;
    int highestFreq = 0;

   
    for (const auto& entry : freqMap) {
        if (entry.second > highestFreq) {
            highestFreq = entry.second;
            highestFreqElement = entry.first;
        }
    }
    
    
    if(highestFreq>size){
    return highestFreqElement;
    } else {
        return -1;
    }
    
    }
