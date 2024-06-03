#include "../headers/lcm.h"
#include <iostream>
#include <numeric>

lcm::lcm(int b) {
    std::cout << "Введите элементы массива: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "array[ " << i + 1 << "/3 ]= ";
        std::cin >> array[i];
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

lcm::lcm() {
    for (int i = 0; i < n; i++) {
        array[i] = 0;
    }
}

int lcm::max() {
    int max = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int lcm::llcm(const int a, const int b) {
    return std::lcm(a, b);
}

lcm lcm::operator*(lcm &lcm2) {
    lcm result;
    for (int i = 0; i < 3; i++) {
        result.array[i] = llcm(array[i], lcm2.array[i]);
    }

    return result;
}
