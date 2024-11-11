#include <iostream>
#include <unordered_map>

// We can also use an map (ordered) => We go from (1) -> to (log n)

using namespace std;

int main() {
  
  unordered_map<string, int> menu;
  
  menu["pizza"] = 15;
  menu["pasta"] = 20;
  menu["coke"] = 99;

  string item;
  cout << "Please, input an item name: ";
  
  cin >> item;

  // At retrives the value on the menu

  //cout << "Check this stuff: " << menu.at("pizza");

  // Checking if a key exists
  if (menu.count(item)) {
    cout << item << " it is on the menu";
  } else {
   cout << "Item is not on the menu";
  }

  cout << "" << endl;


  // pair is a data-structure build into c++ has first (key) and second(value) 
  for (pair<string, int> item: menu) {
    cout<< item.first << ", " << item.second << endl;
  }

  // We can iterate


  return 0;
}