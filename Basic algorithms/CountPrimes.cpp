  int countPrimes(int n) {

        int count = 0;

        for(int i=0;i<n;i++) {
            int root = sqrt(i);
            int factors = 0;

         for(int j=1;j<root;j++) {
                

                 if(i%j==0) {
                    if(j*j==i) {
                        factors++;
                    } else {
                    factors = factors + 2;
                    }
                 }

                 if(factors<=2) {
                    count++;
                 }
              }
        }

        return count++;
    }
