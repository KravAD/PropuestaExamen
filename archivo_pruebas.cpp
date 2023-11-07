#include <iostream>
#include <cmath>

int main() {
    int max_value = 20;
    for (int a = 1; a <= max_value; a++) {
        for (int b = a; b <= max_value; b++) {
            double c = sqrt(a*a + b*b);
            if (c == (int)c) {
                std::cout << "Triple pitagórico encontrado: " << a << ", " << b << ", " << (int)c << std::endl;
            }
        }
    }
    return 0;
}
