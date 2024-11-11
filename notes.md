unordered_maps => if we need keys, values
unordered_sets => if we need keys

# Loop through arrays
```cpp
for (const auto& elem : vec) {
  std::cout << elem << "\n";
}
```

# Loop through maps and printing
```cpp
for (const auto& pair : map) {
      std::cout << pair.first << ": " << pair.second << "\n";
}
```

$ While loop
```cpp
int i = 1;

// Print numbers from 1 to 5
while (i <= 5) {
  std::cout << "i = " << i << std::endl;
  i++;
}
```

# Do While loop
```cpp
// Print numbers from 1 to 5
    do {
        std::cout << "i = " << i << std::endl;
        i++;
    } while (i <= 5);
```

# For loop
```cpp
// Print numbers from 1 to 5
for (int i = 1; i <= 5; i++) {
    std::cout << "i = " << i << std::endl;
}
```

# Range for loop 
```cpp
std::vector<int> numbers = {10, 20, 30, 40, 50};

// Iterate over the vector
for (const auto& num : numbers) {
    std::cout << num << " ";
}
```
