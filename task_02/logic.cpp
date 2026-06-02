#include "logic.h"
#include <cstdlib>

bool canReachTarget(int sx, int sy, int fx, int fy, unsigned int t) {
    int dx = std::abs(fx - sx);
    int dy = std::abs(fy - sy);
    int min_steps = (dx > dy) ? dx : dy;  // max(dx, dy)

    if (t < min_steps) {
        return false;
    }

    if ((t - min_steps) % 2 == 0) {
        return true;
    }
    if (dx == 0 && dy == 0 && t ==1){
        return false;
    }

    return true;
}