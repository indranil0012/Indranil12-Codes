#include<stdio.h>
int main ()
{
    int num, sum=0, temp, r;

    printf ("Enter A 3-Digit number : ");
    scanf ("%d", &num);

    temp = num;
    while ( temp >0 )
    {
        r = temp % 10;
        sum = sum + (r*r*r);
        temp = temp / 10;
    }
    if (sum == num)
    {
        printf ("%d is an Armstrong number.", num);
    }
    else
    {
        printf ("%d is not an Armstrong Number.", num);
    }
    return 0;
}
