/* Write a C program to check whether a number is prime or not using WHILE loop then using FOR loop */

#include<stdio.h>
int main ()
{
	int n, i=2;
	printf ("enter a number: ");
	scanf ("%d", &n);
	
    for(i=2;i<n;i++){
		if(n%i==0)
			break;
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
