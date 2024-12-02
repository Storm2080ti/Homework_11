#include <iostream>
#include "Helpers.h"

int main() {
    int a = 6;
    int b = 46;

    // Вызов функции из Helpers.h
    int result = squareOfSum(a, b);
    
    std::cout << "Квадрат суммы: " << result << std::endl;

    return 0;
}
