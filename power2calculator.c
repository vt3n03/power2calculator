#include <stdio.h>

unsigned long power_of_two(int n) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        unsigned long half = power_of_two(n / 2);
        return half * half;
    } else {
        unsigned long half = power_of_two((n - 1) / 2);
        return half * half * 2;
    }
}

int main() {
    int exponent;
    printf("Enter a non-negative integer exponent (or a negative number to quit): ");
    scanf("%d", &exponent);

    while (exponent >= 0) {
        unsigned long result = power_of_two(exponent);
        printf("2 to the power of %d is %lu\n", exponent, result);

        printf("Enter a non-negative integer exponent (or a negative number to quit): ");
        scanf("%d", &exponent);
    }

    printf("You entered a negative number. The program will now quit.\n");
    return 0;
}
