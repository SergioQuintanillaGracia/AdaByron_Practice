#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t-- > 0) {
        int n, m;
        std::cin >> n >> m;

        int line = n + m + 1;
        int res = -1;

        if (line == 1) {
            res = 1;
        } else {
            res += (line - 1) * line / 2;
            std::cout << res << std::endl;
            res += n + 1;
        }

        std::cout << res << std::endl;
    }

    return 0;
}