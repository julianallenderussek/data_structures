#include <iostream>
#include <vector>

using namespace std;

vector<int> inputArr = {1,2,3,4,5};


// Array Products
// Implement a function that takes in a vector of integers, and returns a vector of the same length, where each element in the output array is equal to the product of every other number 
// in the input array. Solve this problem without using division.
// In other words, the value at output[i] is equal to the product of every number in the input array other than input[i]. You can assume that answer can be stored inside int datatype and no-overflow will occur due to products.

// Sample Input
// Both inputs and outputs are vectors.
// {1,2,3,4,5}
// Sample Output
// {120, 60, 40, 30, 24}

vector<int> productArray(vector<int> arr) {
  int n = arr.size();

  if (n == 1) {
    return {0};
  }

  int i, temp = 1;

  vector<int> prod(n, 1);

  for (int i = 0; i < n; i++) {
    prod[i] = temp;
    temp *= arr[i];
  }
 
  
  cout  << "First iteration" << endl;
  
  for (auto x: prod) {
    cout  << x << ", ";
  }

  cout  << endl;

  // Reset temp
  temp = 1;

  /* In this loop, temp variable contains product of
      elements on right side excluding arr[i] */
  for (int i = n - 1; i >= 0; i--) {
    prod[i] *= temp;
    temp *= arr[i];
  }

  return prod;
}


int main() {
  
  vector<int> result = productArray(inputArr);

  for (auto x: result) {
    cout  << x << ", ";
  }

  return 0;
}