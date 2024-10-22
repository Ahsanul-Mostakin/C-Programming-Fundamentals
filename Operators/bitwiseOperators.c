#include <stdio.h>

int main() {
    int a = 5, b = 9;

    printf("Bitwise AND: %d & %d = %d\n", a, b, a & b);  // 5 & 9 -> 1
    printf("Bitwise OR: %d | %d = %d\n", a, b, a | b);   // 5 | 9 -> 13
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, a ^ b);  // 5 ^ 9 -> 12
    printf("Bitwise NOT: ~%d = %d\n", a, ~a);            // ~5 -> -6
    printf("Left Shift: %d << 1 = %d\n", a, a << 1);     // 5 << 1 -> 10
    printf("Right Shift: %d >> 1 = %d\n", b, b >> 1);    // 9 >> 1 -> 4
    
    return 0;
}
