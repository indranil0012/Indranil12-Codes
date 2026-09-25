//Write a C programm to convert celsius to fahrenheit//

#include<stdio.h>
int main()
{
	float C,F;
	printf("enter temp in celcius :\n");
	scanf("%f", &C);
	F=((9*C)/5)+32;
	printf("temp in fahrenheit =%f \n", F);
	return 0;
}
