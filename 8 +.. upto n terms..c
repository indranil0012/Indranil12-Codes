#include<stdio.h>
int main()
{
    int n, i;
    float sum=0.0, fact=1.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fact = fact * i;
        sum = sum + (fact/(2*i));
    }
    printf("Sum of the series is: %.2f", sum);
    return 0;
}