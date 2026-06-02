#include <cassert>
#include "logic.h"

void test_small() {

    assert(countWithoutConsecutiveOnes(4) == 4);
}

int main() {

    test_small();
}