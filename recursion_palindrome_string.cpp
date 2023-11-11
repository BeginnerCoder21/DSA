bool isPalindromeHelper(const std::string &str, int i, int n) {
    if (i >= n) {
        return true;
    }

    if (str[i] != str[n]) {
        return false;
    }

    return isPalindromeHelper(str, i + 1, n - 1);
}

bool isPalindrome(std::string &str) {
    int n = str.size();
    return isPalindromeHelper(str, 0, n - 1);
}
