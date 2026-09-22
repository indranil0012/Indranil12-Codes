// write a c program to sort three input number in ascending order//

 #include<stdio.h>
 int main()
 {
     int a , b , c , temp;
     printf ("enter three number seperated by spaces: ") ;
     scanf (" %d %d %d" , &a, &b, &c);
     
     if (a>b)
     {
         temp = a;
         a = b;
         b = temp; }
     
     
     if (a > c) {
         temp = a;
         a = c;
         c = temp;
         }
         
     if (b > c) {
         temp = b;
         b = c;
         c = temp;
         }
          
     printf ("show number in ascending order: %d, %d, %d\n" , a, b, c);
     
     return 0;
 }