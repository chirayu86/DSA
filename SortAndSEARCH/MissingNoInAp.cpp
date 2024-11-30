    int inSequence(int a, int b, int c) {
        
        while(a<=b) {
            
            if(a==b) {
                return 1;
            }
            
            a=a+c;
        }
        
        return 0;
    }
