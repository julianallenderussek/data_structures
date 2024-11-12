#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int largestBand(vector<int> arr) {
  int n = arr.size();

  int largest = 0;

  unordered_set<int> s;

  // Data inside set
  for (int x: arr) {
    s.insert(x);
  } 

  // Iterate through array
  for (auto elem: s ) {
    int parent = elem - 1;

    // This the case where we do not find it -> Means this is a band start
    if (s.find(parent) == s.end()) {
      
      // Next number 4  -> 5 check
      int next_no = elem + 1;
      int cnt = 1;

      // We found next
      while(s.find(next_no) != s.end()) {
        next_no++;
        cnt++;
      }

      largest = max(cnt, largest);

    }

  }

  return largest;

}

int main() {
  
  vector<int> arr = {1, 9, 3, 0, 4, 18, 5, 2, 10, 7, 12, 6};

  cout << largestBand(arr) <<endl;

  return 0;
}
