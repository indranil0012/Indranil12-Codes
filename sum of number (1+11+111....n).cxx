/* write a C program to find Sum of number as follows . 1+11+111.....upto n term */

#include<stdio.h>
int main ()
{
    int n, i = 1;
    long long t = 1, s = 0;
    
    printf ("Enter n: ");
    scanf ("%d", &n);
    
    while (i <= n){
    s = s + t;
    t = t * 10 + 1;
    i++ ;
    }
    printf ("Sum = %lld\n", s );
    
    return 0;
}