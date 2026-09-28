// 2+5+8+11+14+...... upto n terms. write a C program to calculate sum of the given series//

#include<stdio.h>
int main ()
{
	int n, i=1, t=1, s=0;
	printf ("Enter the numbers of terms: ");
	scanf ("%d", &n);
	while (i<=n)
	{
		s=s+t;
		t=t+i;
		i++;
	}
	printf ("Sum=%d", s);
	return 0;
}
