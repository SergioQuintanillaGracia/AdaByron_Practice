#include <iostream>
#include <vector>
#include <algorithm>

void printVec(std::vector<int> v) {
    // Prints a vector<int>
    for (int i = 0; i < v.size() - 1; i++) {
        std::cout << v[i] << ", ";
    }
    std::cout << v[v.size() - 1] << '\n';
}

int main() {
    std::vector<int> vec = {5, 1, 3, 4, 5, 2};
    
    // Sort the vector in ascending order
    std::sort(vec.begin(), vec.end());
    printVec(vec);

    // Sort the vector in descending order
    std::sort(vec.rbegin(), vec.rend());
    printVec(vec);

    return 0;
}