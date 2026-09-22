/* Write a C program to find the number is Even or Odd */

#include<stdio.h>
int main ()
{
    int num;
    printf ("enter integer number: ");
    scanf ("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is even number. \n", num);
    }
    else {
        printf("%d is odd number. \n", num);
    }
    return 0;
}