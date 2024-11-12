#include <iostream>
#include<algorithm>
#include <vector>

using namespace std;

// Return the min amount of swaps needed to organize the array
vector<int> arr = { 5,4,3,2,1};

int countMinSwaps(vector<int> arr) {

  int n = arr.size();
  int ans = 0;
  pair<int,int> ap[n];

  for (int i = 0; i < n; i++ ) {
    ap[i].first = arr[i];
    ap[i].second = i;
  }  
  
  sort(ap, ap + n);

  for(auto x: ap) {
    cout << "index: " << x.first << " target: " << x.second << " " << endl;
  }

  vector<bool> visited(n, false);

  for (int i = 0; i < n ;i++) {
    int old_position = ap[i].second;

    if (visited[i] == true or old_position == i) {
      continue;
    }

    // visiting the element (index) for first time
    int node = i;
    int cycle = 0;

    while(!visited[node]) {
      visited[node] = true;
      int next_node = ap[node].second;
      node = next_node;
      cycle += 1;
    }

    ans += (cycle - 1);

  }
  
	return ans;
}

int main() {
    // vector<int> arr { 3,2,1};
    cout << countMinSwaps(arr) << endl;
    return 0;
}
