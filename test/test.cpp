#include <iostream>
#include <cmath>

double calculateSquareRoot(double number) {
    return sqrt(number);
}

int main() {
    double number = 25.0;
    double result = calculateSquareRoot(number);

    std::cout << "The square root of " << number << " is " << result << std::endl;

    return 0;
}
