// Write a c program to accept a number and find the sum of it's individual digits repeatedly till the result is a single digit. //

#include<stdio.h>
int main ()
{
    int sum, num;
    printf("Enter a number-->");
    scanf("%d", &num);
    if (num<0) num=-num;
    while (num>9)
    {
        sum = 0;
        while (num>0)
    {
        sum += num%10;
        num/= 10;
    }
    num=sum;
    }
    printf ("Single Digit Number is--> %d\n", num);
    return 0;
}