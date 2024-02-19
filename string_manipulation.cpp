#include <algorithm>
#include <string>
#include <iostream>

int main() {
    std::string str = "Best 6 string ever";
    // Convert the string to uppercase
    // transform (from <algorithm>) executes in this case the function ::toupper over everything from
    // str.begin() to str.end(), and stores the results after the third parameter, which is str.begin().
    // This means it overwrites every character with its uppercase form.
    // toupper is preceded by :: so the compiler directly looks for the function in the local scope.
    // As there is no other function called toupper, it makes no difference here, it could be removed.
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    std::cout << str << std::endl;  // Outputs BEST 6 STRING EVER

    return 0;
}