#include <cassert>
#include "logic.h"

void test_small() {

    assert(countWithoutConsecutiveOnes(15) == 8);
}

int main() {

    test_small();
}