#include <iostream>
#include <string>

int main() {
    std::string s = "128.2";
    int i = std::stoi(s);
    double d = std::stod(s);

    std::cout << "Int: " << i << ", Double: " << d << '\n';  // Outputs 'Int: 128, Double: 128.2'

    std::string intS = std::to_string(i);
    std::cout << "Int string: " << intS << std::endl;  // Outputs 'Int string: 128'

    std::string doubleS = std::to_string(d);
    std::cout << "Double string: " << doubleS << std::endl;  // Outputs 'Double string: 128.200000'

    return 0;
}