/* Write a C program to find the sum of the following series 1!+3!+5!+..... upto n! number */

#include<stdio.h>
int main ()
{
	int i=1, c=1, a=0, n, j;
	printf("Enter n: ");
	scanf ("%d", &n);
	while(i<=n)
	{
		c=1;
		j=1;
		while(j<=i) 
		{
			c=c*j;
			j++;
		}
		a=a+c;
		i=i+2;
	}
	printf ("Sum=%d",a);
	return 0;
}
