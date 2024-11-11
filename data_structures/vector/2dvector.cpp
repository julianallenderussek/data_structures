#include <iostream>
#include <vector>

using namespace std;

void print2dVector(const vector<vector<int>>& arr) {  // Pass by const reference to avoid unnecessary copying
  string lineVector;
  for (int i = 0; i < arr.size(); i++) {
    lineVector = "";
    for (int j = 0; j < arr[i].size(); j++) {
      lineVector += to_string(arr[i][j]);
      if (j != arr[i].size() - 1) {
        lineVector += ", ";
      } 

    }

    cout << lineVector << endl;
  }
  cout << endl;  // Print a newline at the end for better output formatting
}

int main() {
  vector<
    vector<int>
    > arr = {{21, 43, 53}, {21, 43, 53}, {21, 43, 53}};

  print2dVector(arr);

  return 0;
}