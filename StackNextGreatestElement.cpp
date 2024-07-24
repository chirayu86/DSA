#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> nextGreaterElement(vector<int>& arr) {
  int n = arr.size();
  vector<int> result(n, -1);  
  stack<int> s;

  for (int i = n - 1; i >= 0; --i) {
   
    while (!s.empty() && s.top() <= arr[i]) {
      s.pop();
    }


    if (!s.empty()) {
      result[i] = s.top();
    }

    
    s.push(arr[i]);
  }

  return result;
}

int main() {
  vector<int> arr = {4, 1, 2, 5, 1};
  vector<int> nextGreater = nextGreaterElement(arr);

  cout << "Array: ";
  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;

  cout << "Next Greater Elements: ";
  for (int num : nextGreater) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
