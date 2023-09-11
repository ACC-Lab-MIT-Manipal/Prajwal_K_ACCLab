#include <stdio.h>

long long fast_exponentiation(long long base, long long exponent, long long modulus) {
    long long result = 1;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }

        base = (base * base) % modulus;

        exponent /= 2;
    }

    return result;
}

int main() {
    long long base, exponent, modulus, result;

    printf("Enter base: ");
    scanf("%lld", &base);

    printf("Enter exponent: ");
    scanf("%lld", &exponent);

    printf("Enter modulus: ");
    scanf("%lld", &modulus);
    result = fast_exponentiation(base, exponent, modulus);

    printf("Result: %lld\n", result);

    return 0;
}
