//Write a C program to find the sum of numbers. s=10+101+1010......n //

#include<stdio.h>
int main ()
{
	int i=1, n, s=0, a=1;
	scanf ("%d", &n);
	while (i<=n)
	{
	s=s+a;
    if (i%2==0)
    a=a*10+1;
    else
    a=a*10;
    i++;
    }
       printf("%d\n", s);
}
