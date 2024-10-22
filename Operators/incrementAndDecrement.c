#include <stdio.h>

int main() {
    int a = 5;

    printf("Initial value: %d\n", a);  // 5
    printf("Post-increment: %d\n", a++);  // prints 5, then a = 6
    printf("After increment: %d\n", a);   // 6
    printf("Pre-increment: %d\n", ++a);   // increments to 7, then prints 7
    
    printf("Post-decrement: %d\n", a--);  // prints 7, then a = 6
    printf("After decrement: %d\n", a);   // 6
    printf("Pre-decrement: %d\n", --a);   // decrements to 5, then prints 5

    return 0;
}
