#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        if (s == "nan") {
            std::cout << "NaN\n";
        } else if (s == "inf") {
            std::cout << 0 << '\n';
        } else {
            std::cout << std::setprecision(6) << 1 / std::stod(s) << std::endl;
        }
    }

    return 0;
}