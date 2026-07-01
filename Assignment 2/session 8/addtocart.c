//Question 2

#include <stdio.h>
#include <string.h>

void addToCart(char cart[][20],int *c,char *p)
{
    int i;

    strcpy(cart[*c], p);
    (*c)++;

    printf("Updated Cart:\n");
    for(i = 0; i < *c; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main()
{
    char cart[10][20];
    int c = 0;
    int i;

    addToCart(cart, &c, "Laptop");
    addToCart(cart, &c, "Mouse");

    printf("\nCart in Main Function:\n");
    for(i = 0; i < c; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

