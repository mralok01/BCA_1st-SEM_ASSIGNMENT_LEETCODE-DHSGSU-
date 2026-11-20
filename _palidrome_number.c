#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    } else {
        int n = 0;

        while (x > n) {
            n = n * 10 + x % 10;
            x /= 10;
        }

        if (x == n || x == n / 10) {
            return true;
        } else {
            return false;
        }
    }
}