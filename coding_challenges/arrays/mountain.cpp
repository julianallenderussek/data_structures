#include <iostream>
#include <vector>

using namespace std;

vector<int> arr = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

int highest_mountain(vector<int> arr) {
  int n = arr.size();

  int largest = 0;
  int result;

  for (int i = 1; i <= n -2;) {

    // Check if arr[i] is a peak or not; 
    if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1]) {
      

      int cnt = 1;
      int j = i; 

      // count backwards
      while (j >= 1 and arr[j] > arr[j - 1]) {
        j--;
        cnt++;
      }

      // count forwardsdd
      while (i <= n - 2 and arr[i] > arr[i + 1]) {
        i++;
        cnt++;
      }
      largest = max(largest, cnt);
    } else {
      i++;
    }

  }

  return largest;
}


int main() {
  
	cout << highest_mountain(arr) << endl;

  return 0;
}