#include <stdio.h>
int main()
{
   char Items[] = "Pizza";
	char ItemDescription[] = "Medium";
	
	float Quantity= 6;
	float Discount= 0.05;
	
	float Price= 299.32;
	
	float DiscountedPrice;
	
	Price = Price * Quantity;
	DiscountedPrice = Price - (Price * Discount);
	
	printf ("Items:  %s\n", Items);
    printf ("Quantity:  %.0f\n", Quantity);
    printf ("Item Descrition: %s\n", ItemDescription);
    printf ("Discount:  %.2f\n", Discount);
    printf ("Price:  %.2f\n",  Price);
    printf ("Discounted Price: %.2f\n", DiscountedPrice);
    return 0;
}
