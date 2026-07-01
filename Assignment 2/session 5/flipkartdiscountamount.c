//Question 3

#include<stdio.h>

int main()
{
    float amount,fa;

    printf("Enter Cart Amount: ");
    scanf("%f",&amount);

    if(amount>1000)
    {
        if(amount > 2000)
            fa=amount-(amount*20/100);
        else
            fa=amount-(amount*10/100);
    }
    else
    {
        fa=amount;
    }

    printf("Final Amount = %.2f",fa);
}
