//write a C programm to calculate the area & perimeter of a rectangle//

#include<stdio.h>
int main()
{
	int l,b;
	int area, peri;
	printf("Enter Length & Breadth of the Rectangle: \n");
	scanf("%d", &l);
	scanf("%d", &b);
	    area = l*b;
	    peri = 2*(l+b);
	    printf("area = %d \n", area);
	    printf("perimeter= %d \n", peri);
	    return 0;
}
