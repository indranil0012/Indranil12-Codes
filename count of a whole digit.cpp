/* Write a C program to  count a digits of a whole number*/ 

#include<stdio.h>
int main ()
{
    int n, digit=0, c=0;
    printf ("enter a number--> ");
    scanf ("%d", &n);
    while (n>0)
    {
    	digit = n % 10;
    	n/=10;
    	c++;
	}
	printf (" Count a digit if a whole number--> %d", c);
}
