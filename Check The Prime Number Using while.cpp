/* Write a C program to check whether a number is prime or not using WHILE loop then using FOR loop */

#include<stdio.h>
int main ()
{
	int n, i=2, c=0;
	printf ("enter a number: ");
	scanf ("%d", &n);
	
	while (i<n)
	{
		if (n % i ==0)
		{
			c++;
			break;
		}
		i++;
	}
	if (n<=1){
	printf(" Not a Prime Number");
}
	else if
	(i==n)
	{printf ("It's a Prime Number");
}
	else
	{
	
	printf (" It's Not a Prime Number");}
	
	return 0 ;
}
