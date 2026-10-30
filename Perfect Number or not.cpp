/* Write a C program Whether a number is Perfect Or not*/

#include<stdio.h>
int main ()
{
	int n, i=1, s=0;
	
	printf ("Enter A Number");
	scanf ("%d", &n);
	
	while (i<n)
	{
	if (n%i==0) {
	s=s+i;
    }
    i++;
}
  if(s==n){
		printf("Perfect Number");
	}
	else{
		printf("Not a perfect number");
	}
	return 0;
}

