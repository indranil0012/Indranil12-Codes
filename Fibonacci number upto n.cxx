/* Write a C program to print fibonacci number upto n */

#include <stdio.h>

int main() {
    int n;
    int a = 0, b= 1, c;
    

    printf("Enter limit n: ");
    scanf("%d", &n);

    while (a <= n ) {
        printf ("%d    ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
