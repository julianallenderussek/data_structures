#ifndef MYUTILS_H
#define MYUTILS_H

#include <iostream>
#include <type_traits>

// Template function to print any associative container (unordered map)
template <typename Container>
void printMap(const Container& container) {
    for (const auto& pair : container) {
        std::cout << "  " << pair.first << ": " << pair.second << "\n";
    }
}

#endif // MYUTILS_H