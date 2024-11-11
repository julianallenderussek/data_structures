#!/bin/bash

# Path to the C++ file (set this variable)

# CPP_FILE_PATH="./exercises/main.cpp"
# CPP_FILE_PATH="./data_structures/vector/2dvector.cpp"
# CPP_FILE_PATH="./data_structures/maps/containsCycle.cpp"
CPP_FILE_PATH="./coding_challenges/arrays/largestBand.cpp"

# Output executable name
OUTPUT_FILE="program.out"

# Check if the C++ file exists
if [[ ! -f "$CPP_FILE_PATH" ]]; then
    echo "Error: C++ file not found at $CPP_FILE_PATH"
    exit 1
fi

# Compile the C++ file
g++ "$CPP_FILE_PATH" -o "$OUTPUT_FILE"
if [[ $? -ne 0 ]]; then
    echo "Compilation failed."
    exit 1
fi

# Run the executable
echo "Running the program..."
./"$OUTPUT_FILE"

# Clean up the output file after execution (optional)
rm "$OUTPUT_FILE"
