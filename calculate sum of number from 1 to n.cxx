/* Write a C program to calculate sum of number 1 to n */

#include <stdio.h>
int main() {
    int n;
    int s= 0;

printf("Enter the value of n: ");
scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        s += i;
    }

    printf("The sum of numbers from 1 to %d is: %d\n", n, s);

    return 0;
}
