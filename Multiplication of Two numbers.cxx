/* Write a C program to multiply two numbers */

#include<stdio.h>
int main()
{
    int a, b, c ;
    printf ("\n enter two numbers: ");
    scanf ("%d", &a);
    scanf ("%d", &b);
    
    c= a*b;
    printf("\n the multiplication is %d" , c);
    return 0;
}