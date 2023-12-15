#include <iostream>
#include "palindrome.h"
#include <stdexcept>

int main() {
    try {
        std::cout << "Enter a string (letters only): ";
        std::string input;
        std::getline(std::cin, input);

        for (char c : input) {
            if (!std::isalpha(c)) {
                throw std::runtime_error("Invalid character detected. Please enter letters only.");
            }
        }

        bool palindrome = Palindrome::isPalindrome(input, 0, input.length() - 1);

        if (palindrome) {
            std::cout << "The entered string is a palindrome." << std::endl;
        } else {
            std::cout << "The entered string is not a palindrome." << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
