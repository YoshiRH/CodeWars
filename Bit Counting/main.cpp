#include <iostream>

unsigned int countBits(unsigned long long n);

int main() {
    int a{1234};
    countBits(a);
    return 0;
}

unsigned int countBits(unsigned long long n) {
    int sum{0};
    while (n != 0) {
        sum += n%2;
        n = n / 2;
    }
    return sum;
}