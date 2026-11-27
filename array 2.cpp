/* write a c program to find a largest number within an Array*/

#include <stdio.h>

int main()
{
    int a[100], n, i, largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }

    printf("The largest number is: %d", largest);

    return 0;
}

