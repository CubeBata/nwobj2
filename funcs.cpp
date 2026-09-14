#include <iostream>

int sum(int a, int b) {
    return a + b;
}

long long factorial(int n) {
    if (n < 0) {
        return -1;
    }
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "sum(3, 5) = " << sum(3, 5) << std::endl;
    std::cout << "factorial(5) = " << factorial(5) << std::endl;
    std::cout << "isPrime(7) = " << (isPrime(7) ? "true" : "false") << std::endl;
    std::cout << "isPrime(10) = " << (isPrime(10) ? "true" : "false") << std::endl;

    return 0;
}