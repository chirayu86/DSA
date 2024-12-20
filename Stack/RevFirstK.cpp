  queue<int> modifyQueue(queue<int> q, int k) {
      stack<int> st;
      
      
      for(int i=0;i<k;i++) {
          st.push(q.front());
          q.pop();
      }
      
      while(!st.empty()) {
          q.push(st.top());
          st.pop();
      }
      
      int rem = q.size()-k;
      for(int i=0;i<rem;i++) {
          q.push(q.front());
          q.pop();
      }
      
      return q;
    }
