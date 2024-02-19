#include <iostream>
#include <iomanip>

int main() {
    // setprecision outputs the number with just x significant figures (not x decimals).
    std::cout << std::setprecision(4) << 12.34567 << std::endl;  // Outputs '12.35' (it rounds the last decimal)
    std::cout << std::setprecision(6) << 1.23 << std::endl;  // Outputs '1.23'

    // setw is used to set the minimum number of characters used to print something.
    std::cout << std::setw(4) << 77 << std::endl;  // Outputs '  77'
    std::cout << std::setw(4) << 123456 << std::endl;  // Outputs '123456'
    std::cout << std::setw(4) << "abc" << std::endl;  // Outputs ' abc'

    // setfill is used before setw to fill the empty spaces were nothing is printed.
    std::cout << std::setfill('#') << std::setw(4) << 77 <<std::endl;  // Outputs '##77'
    std::cout << std::setfill('#') << std::setw(4) << 123456 << std::endl;  // Outputs '123456'

    // Example of outputting hh:mm:ss
    int h = 8, m = 52, s = 2;
    std::cout << std::setfill('0') << std::setw(2) << h << ':'
              << std::setfill('0') << std::setw(2) << m << ':'
              << std::setfill('0') << std::setw(2) << s
              << std::endl;
              // Outputs 08:52:02
    
    std::cout << std::setbase(16) << 110 << std::endl;  // Outputs 6e
    std::cout << 20 << std::endl;  // Outputs 14 (setbase is conserved)
    std::cout << std::setbase(10) << 20 << std::endl;  // Outputs 20

    return 0;
}