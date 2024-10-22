#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("Is a equal to b? %d\n", a == b);              // 5 == 10 -> 0 (false)
    printf("Is a not equal to b? %d\n", a != b);          // 5 != 10 -> 1 (true)
    printf("Is a greater than b? %d\n", a > b);           // 5 > 10 -> 0 (false)
    printf("Is a less than b? %d\n", a < b);              // 5 < 10 -> 1 (true)
    printf("Is a greater than or equal to b? %d\n", a >= b); // 5 >= 10 -> 0 (false)
    printf("Is a less than or equal to b? %d\n", a <= b);    // 5 <= 10 -> 1 (true)

    return 0;
}
