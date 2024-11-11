#include <iostream>
#include <unordered_set>
#include <vector>
#include "../../utils/myUtils.h"

using namespace std;


// Problem -> Given an array containing N integers, and an number S denoting a target sum.
// Find two distinct integers that can pair up to a form target sum.
// Let us assume there will be only one such pair

vector<int> inputArray = {10, 5, 2, 3, -6, 9, 11};
int s = 4;

vector<int> findPair(vector<int> numbers, int sum) {
  unordered_set<int> s;
  vector<int> result;

  for (int i = 0; numbers.size(); i++) {
    int x = sum - numbers[i];
    if (s.find(x) != s.end()) {
      result.push_back(x);
      result.push_back(numbers[i]);
      return result;
    }
    // Add the number to the set;
    s.insert(numbers[i]);
  }

  // Return empty vector
  return {};

}

int main() {
  
  findPair(inputArray, s);

  return 0;
}

