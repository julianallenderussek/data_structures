#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
int S = 18;


vector<vector<int>> triplets( vector<int> arr, int targetSum) {
  sort(arr.begin(), arr.end());
  int n = arr.size();

  vector<vector<int>> result;

  // Pick every arr[i], pair sum remaining part
  for (int i = 0; i <= n - 3; i++) {
    int j = i + 1;
    int k = n - 1;
    
    while(j < k) {
      int current_sum = arr[i];
      current_sum += arr[j];
      current_sum += arr[k];

      if (current_sum == targetSum) {
        result.push_back({ arr[i], arr[j], arr[k]});
        j++;
        k--;
      }

      else if (current_sum > targetSum) {
        k--;
      } 

      else {
        j++;
      }
    }

  }
  
  return result;
}

int main() {
  
  auto result = triplets(arr, S);

  // cout << result.size();

  // for (auto v: result) {
  //   for (auto num: v) {
  //     cout << num << " ,";
  //   } 
  //   cout << endl;
  // }
 

  return 0;
}
