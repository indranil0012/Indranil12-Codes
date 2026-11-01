#include<stdio.h>
int main ()
{
    int num, temp, sum=0, r, fact, i;

    printf ("Enter a number: ");
    scanf ("%d", &num);

    temp = num;

    while (temp > 0)
    {
        r=temp%10;
        fact=1;
        for (i=1; i<=r; i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
        temp = temp/10;
    }
    if (sum == num && num > 0)
    {
        printf ("%d is a Krishnamurthy Number.", num);
    }
    else
    {
        printf ("%d is not a Krishnamurthy Number.", num);
    }
    return 0;
}