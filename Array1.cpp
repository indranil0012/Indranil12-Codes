 /* w.c.p to take a input as a array and display into the screen*/
 #include<stdio.h>
 int main(void)
 {
 	int n;
 	printf (" enter a value: \n");
 	scanf ("%d", &n);
 	
 	int a[n];
 	printf("print elements: \n");
 	
 	for (int i=0; i<n; i++)
 	{
 		scanf ("%d", &a[i]);
	 }
	 printf ("THE ELEMENTS ARE= \n");
	 for (int i=0; i<n; i++)
	{
		printf ("%d\t", a[i]);
	}
	return 0;
 }
 
