#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int h, m, s;
        cin >> s;

        m = s / 60;
        s = s % 60;
        h = m / 60;
        m = m % 60;

        cout << std::setfill('0') << std::setw(2) << h << ":" << std::setfill('0') << std::setw(2) << m << ":"
             << std::setfill('0') << std::setw(2) << s << endl;
    }
}