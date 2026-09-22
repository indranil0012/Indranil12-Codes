/* write a C program to swipe two number*/

#include <stdio.h>
int main()
{
    int a;
    int b;
    int c=0;
    printf( "enter two number" );
    scanf( "%d %d" ,&a , &b );
    printf( "before\n" );
    printf( "a = %d\n", a );
    printf( "b = %d\n", b );
    c=b;
    b=a;
    a=c;
    printf( "after\n" );
    printf( "a = %d\n", a );
    printf( "b = %d\n", b );
    return 0;
}