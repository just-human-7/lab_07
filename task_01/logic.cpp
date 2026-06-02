#include "logic.h"

int findPersonWithMop(int n, unsigned int time) {
    if (n <= 1) {
        return 1;
    }

    int period = 2 * (n - 1);
    int t = time % period;

    if (t < n) {
        return t + 1;
    } else {
        return period - t + 1;
    }
}