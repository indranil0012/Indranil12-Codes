/* Write a C program to find the radius & circumference of a circle */

#include<stdio.h>
#define PI 3.14159
int main()
{
   float radius, area, circumference;
   printf (" enter the radius of the circle: ");
   scanf ("%f", &radius);
   
   area = PI * radius * radius;
   circumference = 2 * PI * radius;
   
   printf("circumference of the circle : %.2f\n",  circumference);
   printf("area of the circle : %.2f\n",  area);
   
   return 0;
}