//1+3+5-7+9-......n //

#include<stdio.h>
int main ()
{
	int i=1,final=0, n, a=1;
	scanf ("%d", &n);
	while (i<=n)
	{
    if (i%2==0)
    final=final-a;
    else
    final=final+a;
    i++;
    a+=2;
    }
       printf("Final--> %d\n", final);
       return 0;
}
