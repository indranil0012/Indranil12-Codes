/* Write a C program to display ODD numbers from 1 to n */

#include<stdio.h>
int main()
{
	int n, i=1;
    printf("enter the number: ");
	scanf("%d", &n);
	printf("odd number is from 1 to %d\n", n);
	while(i<=n                        )
	{
		printf ("%d\n", i);
		i=i+2;
	}
	return 0;
}
