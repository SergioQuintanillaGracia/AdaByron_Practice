#include <iostream>
#include <vector>
#include <algorithm>

void printVec(std::vector<int> vec) {
    for (int i = 0; i < vec.size() - 1; i++) {
        std::cout << vec[i] << ", ";
    }
    std::cout << vec[vec.size() - 1] << '\n';
}


int main() {
    std::vector<int> vec = {3, 1, 4, 8, 2, 9, 2, 1};
    printVec(vec);

    std::sort(vec.begin(), vec.end());
    printVec(vec);

    std::sort(vec.rbegin(), vec.rend());

    return 1;
}