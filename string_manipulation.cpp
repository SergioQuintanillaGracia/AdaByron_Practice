#include <algorithm>
#include <string>
#include <iostream>

int main() {
    std::string str = "Best 6 string ever";
    // Convert the string to uppercase (use tolower instead for lowercase)
    // transform (from <algorithm>) executes in this case the function ::toupper over everything from
    // str.begin() to str.end(), and stores the results after the third parameter, which is str.begin().
    // This means it overwrites every character with its uppercase form.
    // toupper is preceded by :: so the compiler directly looks for the function in the local scope.
    // As there is no other function called toupper, it makes no difference here, it could be removed.
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    std::cout << str << std::endl;  // Outputs BEST 6 STRING EVER

    str = "Hello";
    str.insert(5, "&");
    str.insert(2, "##");
    str.append(" hi");  // You can also use the + operator
    std::cout << str << std::endl;  // Outputs He##llo& hi

    str = "Hello";
    std::cout << str.size() << std::endl;  // Outputs 5
    std::cout << str.length() << std::endl;  // Outputs 5 (does the same as str.size())
    std::cout << str.at(1) << std::endl;  // Outputs e

    // Comparing strings
    std::string str1 = "asdfs";
    std::string str2 = "asdfs";
    
    if (str1 == str2) {  // Outputs 'Both are equal'
        std::cout << "Both are equal\n";
    } else {
        std::cout << "They are not equal\n";
    }

    bool areEqual = str1 == str2;
    if (areEqual) {  // Outputs 'Both are equal'
        std::cout << "Both are equal\n";
    } else {
        std::cout << "They are not equal\n";
    }

    // Find the index of the first occurrence of a substring
    std::cout << str1.find("s") << std::endl;  // Outputs 1
    std::cout << str1.find("sd") << std::endl;  // Outputs 1
    std::cout << str1.find("j") << std::endl;  // Unexpected behavior, could print anything

    // Extract a substring
    str = "A random string";
    str2 = str.substr(2, 7);
    std::cout << str2 << std::endl;  // Outputs 'random' (chars at indexes 2 and 7 are included)

    // Replace characters
    str = "Good morning";
    str.replace(2, 1, "a");  // Replace 1 characters from the char at index 2 with 'a'
    std::cout << str << std::endl;  // Outputs Goad morning
    str.replace(2, 4, "&*");  // Replace 4 characters from the char at index 2 with '&*'
    std::cout << str << std::endl;  // Outputs Go&*orning

    // Erasing part of the string
    str = "The impostor isn't sus";
    str.erase(15, 3);  // Delete 3 characters starting at position 15, including the one at index 15
    std::cout << str << std::endl;  // Outputs 'The impostor is sus'

    return 0;
}