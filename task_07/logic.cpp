#include "logic.h"

bool hasConsecutiveOnes(int num) {

    while (num > 0) {

        if ((num & 1) && (num & 2)) {
            return true;
        }

        num >>= 1;
    }

    return false;
}

int countWithoutConsecutiveOnes(int n) {

    int count = 0;

    for (int i = 0; i <= n; i++) {

        if (!hasConsecutiveOnes(i)) {
            count++;
        }
    }

    return count;
}