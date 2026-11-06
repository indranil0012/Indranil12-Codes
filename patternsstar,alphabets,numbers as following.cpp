#include <stdio.h>

int main() {
    int i, j;

    printf("Pattern 1:\n");
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\nPattern 2:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", 64 + j);
        }
        printf("\n");
    }

    printf("\nPattern 3:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
