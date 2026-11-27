/* write a c program to find a smallest number within an Array*/

#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    average = sum / n;

    printf("Average = %.2f\n", average);

    return 0;
}

