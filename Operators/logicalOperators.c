#include <stdio.h>

int main() {
    int a = 1, b = 0;

    printf("Logical AND: a && b = %d\n", a && b);     // 1 && 0 -> 0 (false)
    printf("Logical OR: a || b = %d\n", a || b);      // 1 || 0 -> 1 (true)
    printf("Logical NOT: !a = %d\n", !a);             // !1 -> 0 (false)
    
    return 0;
}
