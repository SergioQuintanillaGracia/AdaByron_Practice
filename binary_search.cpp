#include <iostream>
#include <vector>

int binarySearch(std::vector<int> v, int el) {
    int high = v.size() - 1;
    int low = 0;

    while (high >= low) {
        int med = low + (high - low) / 2;
        int currEl = v[med];

        if (currEl == el) {
            return med;
        } else if (currEl > el) {
            high = med - 1;
        } else {
            low = med + 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> nums = {1, 2, 5, 7, 7, 8, 11, 15};
    int index8 = binarySearch(nums, 8);

    std::cout << index8 << std::endl;  // Outputs 5
    
    return 0;
}