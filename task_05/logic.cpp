#include "logic.h"
#include <numeric>

bool can_reach_from_one(unsigned int fx, unsigned int fy) {
    if (fx == 0 && fy == 0) {
        return false;
    }

    unsigned int g = std::gcd(fx, fy);

    return (g & (g - 1)) == 0;
}