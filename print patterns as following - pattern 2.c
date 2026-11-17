/*
Write a c program to print the following patterns:
     1
   1   1
  1     1
 1       1
11111111111
*/

#include <stdio.h>

int main()
{
    int i;

    for(i=1; i<=4; i++)
    {
        if(i==1)
            printf("    1\n");
        else if(i==2)
            printf("   1 1\n");
        else if(i==3)
            printf("  1   1\n");
        else
            printf(" 1     1\n");
    }

    printf("111111111");

    return 0;
}
