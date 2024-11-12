#include <iostream>
#include <vector>

using namespace std;

vector<int> arr = {-1,2,3,4,-2,6,-8,3};

int maxSubarraySum(vector<int> arr) {

  int n = arr.size();
  int cs = 0;
  int ms = 0;

  // cs computed sum
  // max sum

  for (int i = 0; i < n;i++) {
    cs += arr[i];
    ms = max(ms, cs);

    if (cs < 0) {
      cs = 0;
    }
  }

  return ms;

}

int main() {
  cout << maxSubarraySum(arr) << endl;

  return 0;
}