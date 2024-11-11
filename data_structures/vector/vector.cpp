#include <iostream>
#include <vector>

using namespace std;

void printArray(const vector<int>& arr) {  // Pass by const reference to avoid unnecessary copying
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;  // Print a newline at the end for better output formatting
}

int main() {

  vector<int> arr = {21, 43, 53};

  arr.push_back(16);
  arr.pop_back();

  // Size of the vector
  cout<<arr.size() << endl;

  // Capacity of the vector
  cout<<arr.capacity() << endl;




  return 0;
}