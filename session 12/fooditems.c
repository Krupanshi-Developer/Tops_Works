//Question 2

#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

int main()
{
    int i;
    struct FoodItem food[3] =
    {
        {"Dosa", 150.0, 4.5},
        {"Panipuri", 40.0, 8.8},
        {"Manchuriyan",100.0, 4.7}
    };

    for(i = 0; i < 3; i++)
    {
        printf("\nItem: %s", food[i].itemName);
        printf("\nPrice: %.2f", food[i].price);
        printf("\nRating: %.1f\n", food[i].rating);
    }
}

