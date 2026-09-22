/* Write a C program to calculate the dsily wage of a worker */

#include <stdio.h>

int main() {
    int hours;
    int wage = 0;

    printf("Enter hours worked: ");
    scanf("%d", &hours);

    if (hours <= 8) {
        wage = hours * 100;
    } 
    else if (hours <= 12) {
        wage = (8 * 100) + (hours - 8) * 150;
    } 
    else {
        wage = (8 * 100) + (4 * 150) + (hours - 12) * 200;
    }

    printf("Total Wage: %d\n", wage);

    return 0;
}
