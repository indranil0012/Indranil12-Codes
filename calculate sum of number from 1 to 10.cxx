/* Write a C program to calculate sum of number from 1 to 10 */

#include<stdio.h>
int main ()
{
  int  i = 1;
   int s = 0;
    
    while (i <= 10) 
    {
        s += i;
        i++;
    }
    
    printf("The sum of number from 1 to 10 is : %d\n", s);
    return 0;
}