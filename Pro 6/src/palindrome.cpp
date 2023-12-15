#include "palindrome.h"
#include <cctype>

bool Palindrome::isPalindrome(const std::string& str, int start, int end) {
    if (start >= end) {
        return true;
    }

    if (toupper(str[start]) != toupper(str[end])) {
        return false;
    }

    return isPalindrome(str, start + 1, end - 1);
}
