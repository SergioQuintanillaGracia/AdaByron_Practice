#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int s;
        std::cin >> s;

        std::string prevN = "";

        for (int i = 0; i < s; i++) {
            std::cout << "READ " << i << std::endl;
            std::string n;
            std::cin >> n;

            if (n == "false" && prevN == "true") {
                std::cout << "OUTPUT " << i - 1 << std::endl;
                break;
            } else {
                prevN = n;
            }
        }
    }

    return 0;
}