#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("Addition: %d + %d = %d\n", a, b, a + b);      // 10 + 3 = 13
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);   // 10 - 3 = 7
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);// 10 * 3 = 30
    printf("Division: %d / %d = %d\n", a, b, a / b);      // 10 / 3 = 3 (integer division)
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);      // 10 % 3 = 1 (remainder)
    
    return 0;
}
