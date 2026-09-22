/* Write a C program to find the the Net Salary from the basic salary and details given below.
1. HRA = 10%
2. DA = 5%
3. Overtime = 800/day
*/

#include <stdio.h>
int main ()
{
    float salary, hra, da, tax, overtime, net_salary ;
    
    printf("Enter your basic salary : ");
    scanf("%f", &salary);
    
    hra = salary * 0.10;
    da = salary *  0.05;
    overtime = 800.0 * 11;
    
    if (salary >= 20000) {
        tax = salary * 0.10; }
        
        else { tax = salary * 0.07; }
            
 net_salary = salary + hra + da + overtime - tax;
            printf("Overtime Pay: %f\n", overtime);
            printf("Net Salary: %f\n", net_salary);
            
            return 0;
}