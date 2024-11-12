#include <vector>
#include<algorithm>
#include<climits>
#include<iostream>


using namespace std;

vector<int> inputOne = {23, 5, 10, 17, 30};
vector<int> inputTwo = {26, 134, 135, 14, 19};

pair<int, int> minDifference(vector<int> arr1, vector<int> arr2) {
  sort(arr2.begin(), arr2.end());

  int p1, p2;

  int diff = INT_MAX;

  for (auto num: arr1) {
    
    auto lb = lower_bound(arr2.begin(),arr2.end(), num) - arr2.begin();

    if (lb >= 1 and num - arr2[lb - 1] < diff) {
      diff = num - arr2[lb - 1];
      p2 - arr2[lb - 1];
      p1 = num;
    }

    if (lb != arr2.size() and arr2[lb] - num < diff) {
        diff = arr2[lb] - num;
        p1 = num;
        p2 = arr2[lb];
    }

  }
  
  return {p1,p2};
}

int main() {
  cout << minDifference(inputOne, inputTwo).first << " , " <<minDifference(inputOne, inputTwo).second << endl;

  return 0;
}