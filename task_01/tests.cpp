#include <cassert>
#include <iostream>
#include "logic.h"

void test_basic_movement() {
    assert(findPersonWithMop(6, 8) == 3);
}

void test_reverse_direction() {
    assert(findPersonWithMop(9, 4) == 5);

}

void test_edge_cases() {
    assert(findPersonWithMop(4, 5) == 2);

}

int main() {
    std::cout << "test_basic_movement..." << std::endl;
    test_basic_movement();
    std::cout << "OK" << std::endl;

    std::cout << "test_reverse_direction..." << std::endl;
    test_reverse_direction();
    std::cout << "OK" << std::endl;

    std::cout << "test_edge_cases..." << std::endl;
    test_edge_cases();
    std::cout << "OK" << std::endl;
    return 0;

}