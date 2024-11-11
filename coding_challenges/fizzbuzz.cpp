#include<vector>
#include<string>
#include <iostream>

using namespace std;

// Inputs
int input = 15;

vector<string> fizzbuzz(int n){
    
    vector<string> output;
    
    for (int i = 1; i < n + 1; i ++) {
        if (i % 5 == 0 && i % 3 == 0) {
            output.push_back("FizzBuzz");
        } else if (i % 5 == 0) {
            output.push_back("Fizz");
        } else if (i % 3 == 0) {
            output.push_back("Buzz");
        } else {
            output.push_back(to_string(i));
        }
    }
    
    return output;
}


int main() {
 
  vector<string> result = fizzbuzz(input);
 
  string textLine = "";
  for (int i = 0; i < result.size(); i++) {
    textLine += result[i] + ", "; 
  }

  cout << textLine << endl;
  
  return 0;
}