//Write a C programm to convert fahrenheit to celsius//

#include<stdio.h>
int main()
{
	float F,C;
	printf("enter temp in fahrenheit :\n");
	scanf("%f", &F);
	C=(5*(F-32))/9;
	printf("temp in celsius : %f \n", C);
	return 0;

