/* Write a C program to reverse the digits of a whole number */ 

#include<stdio.h>
int main ()
{
    int n,r, rev;
    printf ("enter a number--> ");
    scanf ("%d", &n);
    while (n>0)
    {
    	r = n % 10;
    	rev = rev*10+r;
		n/=10;
	}
	printf ("the reversed number is--> %d", rev);
}
