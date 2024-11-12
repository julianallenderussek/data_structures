#include <iostream>
#include<algorithm>
#include <vector>
#include <climits>
using namespace std;

vector<int> arr = {1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11};
    
bool outOfOrder(vector<int> arr,int i){
	int x = arr[i];
  // All three cases return true for out of order

  // Edge cases first element
  if (i == 0) {
    return x > arr[1];
  }

  // Last element
  if (i == arr.size() - 1) {
    return x < arr[i - 1];
  }

  return x > arr[i + 1] or x < arr[i - 1];
} 

// Given an array of size at-least two, find the smallest subarray
// that needs to be sorted in place so that entire input array becomes sorted
// If the input array is already sorted, the function should return [-1, -1], 
// otherwise return the start & end index of smallest subarray

pair<int,int> subarraySort(vector<int> arr) {

  int smallest = INT_MAX;
	int largest = INT_MIN;

  for (int i = 0 ; i < arr.size(); i++) {
    int x = arr[i];

    if (outOfOrder(arr, i)) {
      
      smallest = min(smallest, x);
      largest = max(largest, x);      
    }

  }

  cout << "smallest " << smallest << " - largest: " << largest << endl;
      

  // next step find the right index where smallest and largest lie (subarray) for out solution
  if (smallest == INT_MAX) {
    return {-1, -1};
  }

  int left = 0;
  while(smallest >= arr[left]) {
    left++;
  }

  int right = arr.size() - 1;
  while(largest <= arr[right]) {
    right--;
  }

  return {left,right};
}


int main() {
    auto p = subarraySort(arr);
    cout<< p.first <<" and "<<p.second <<endl;
    return 0;
}
