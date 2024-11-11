#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;




int largestBand(vector<int> arr) {
  int n = arr.size();

  unordered_set<int> s;

  // Data inside set
  for (int x: arr) {
    s.insert(x);
  } 

  // Iterate through array
  for (auto elem: s ) {
    int parent = elem - 1;
    

  }



}

int main() {
  
  vector<int> arr = {1, 9, 3, 0, 18, 5, 2, 10, 7, 12, 6};

  cout << largestBand(arr) <<endl;

  return 0;
}
