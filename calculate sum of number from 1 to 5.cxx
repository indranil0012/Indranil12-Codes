/* Write a C program to calculate sum of number from 1 to 5 */

#include<stdio.h>
int main ()
{
    int s = 0;
    for (int i = 1; i <= 5; i++)
    {
        s += i;
    }
    
    printf("The sum of numbers from 1 to 5 is: %d\n", s);
    return 0;
}