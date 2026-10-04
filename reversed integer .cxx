// W.a.c. p. To reverse the digits of an integers //

#include<stdio.h>
int main ()
{
    int n;
    printf("Enter an integer ----> ");
    scanf ("%d", &n);
    
    printf ("Reversed integer: ");
    while (n>0)
    {
        printf("%d", n % 10);
        n/= 10;
    }
    printf("\n");
    return 0;
}