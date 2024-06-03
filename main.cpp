#include <iostream>
#include "headers/lcm.h"

int main() {
    lcm n1(1), n2(1);
    lcm n3 = n1 * n2;
    for (int i = 0; i < 3; i++) {
        std::cout << n3.array[i] << " ";
    }
    return 0;
}
