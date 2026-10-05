/* Write a C program to  calculate sum of digits */ 

#include<stdio.h>
int main ()
{
    int n, digit=0, sum=0;
    printf ("enter a number--> ");
    scanf ("%d", &n);
    while (n>0)
    {
    	digit = n % 10;
    	n/=10;
    	sum+digit;
	}
	printf (" The Sum of the Digits is --> %d", sum);
    return 0;
}
