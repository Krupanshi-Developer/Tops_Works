//Question 2 flipcartDiscount 

#include<stdio.h>

int main()
{
    float price=2000,discount=20;
    int isMember=1;
    float finalPrice;

    finalPrice=price- (price * discount / 100);

    if(isMember)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    printf("Final Price = %.2f", finalPrice);
}
