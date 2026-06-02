#include <cassert>
#include "logic.h"

void test_basic() {

    assert(countWithoutConsecutiveOnes(16) == 9);
}

int main() {

    test_basic();
}